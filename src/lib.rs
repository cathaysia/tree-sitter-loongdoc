#![allow(unused_imports)]

use serde_with::skip_serializing_none;

use core::panic;
use std::{
    ffi::{c_char, CStr, CString},
    mem::ManuallyDrop,
    ptr::null,
};

use clap::Parser;
use tracing::*;
use tree_sitter::Node as TSNode;

pub type ParseResult<T> = anyhow::Result<T>;

trait TSParser {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized;
}

fn utf8_text<'a>(node: TSNode<'_>, source: &'a [u8]) -> Result<&'a str, std::str::Utf8Error> {
    let start = node.start_byte();
    let end = node.end_byte();

    if end >= start {
        std::str::from_utf8(&source[start..end])
    } else {
        std::str::from_utf8(&source[start..])
    }
}
// #[cfg(feature = "wasm")]
#[no_mangle]
#[allow(clippy::not_unsafe_ptr_arg_deref)]
pub fn js_parse_loongdoc(source: *mut c_char) -> *const c_char {
    let source = unsafe { CStr::from_ptr(source) }
        .to_string_lossy()
        .to_string();

    let v = match parse_loongdoc(source.as_bytes()) {
        Ok(v) => serde_json::to_string(&v).unwrap(),
        Err(err) => {
            println!("parse failed: {err:?}");
            Default::default()
        }
    };

    let res = ManuallyDrop::new(CString::new(v).unwrap());
    res.as_ptr()
}

pub fn parse_loongdoc(source: &[u8]) -> ParseResult<Node> {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&tree_sitter_loongdoc::language())?;

    let tree = parser.parse(source, None).unwrap();
    Node::parse(tree.root_node(), source)
}

#[derive(Debug, serde::Serialize, serde::Deserialize)]
pub enum Node {
    Root(Root),
    DocumentTitle(DocumentTitle),
    DocumentAttribute(DocumentAttribute),
    Comment(Comment),
    Title(Title),
    SectionBlock(Box<SectionBlock>),
    Paragraph(Paragraph),
    List(List),
    Admonition(Admonition),
    Breaks,
    Error,
}

impl Default for Node {
    fn default() -> Self {
        Self::Root(Root::default())
    }
}

#[skip_serializing_none]
#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct SectionBlock {
    pub title: Option<String>,
    pub attr: Option<String>,
    pub body: Node,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct Paragraph {
    lines: Vec<Line>,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct Line {
    content: String,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub enum TitleLevel {
    #[default]
    Level0,
    Level1,
    Level2,
    Level3,
    Level4,
    Level5,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct Title {
    pub level: TitleLevel,
    pub title: String,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct Root {
    pub children: Vec<Node>,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct DocumentTitle {
    pub title: String,
    pub attrs: Vec<DocumentAttribute>,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct DocumentAttribute {
    pub key: String,
    pub value: Option<String>,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct Comment {
    pub comment: String,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub enum ListType {
    #[default]
    Unordered,
    Ordered,
}
#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct List {
    pub r#type: ListType,
    pub items: Vec<ListItem>,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct ListItem {
    pub line: Line,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub enum AdmonitionType {
    #[default]
    NOTE,
    TIP,
    IMPORTANT,
    CAUTION,
    WARNING,
}

#[derive(Debug, Default, serde::Serialize, serde::Deserialize)]
pub struct Admonition {
    pub r#type: AdmonitionType,
    pub line: Line,
}

impl TSParser for Admonition {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "admonition");
        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            match node.kind() {
                "line" => {
                    res.line = TSParser::parse(node, source)?;
                }
                "admonition_note" => res.r#type = AdmonitionType::NOTE,
                "admonition_tip" => res.r#type = AdmonitionType::TIP,
                "admonition_important" => res.r#type = AdmonitionType::IMPORTANT,
                "admonition_caution" => res.r#type = AdmonitionType::CAUTION,
                "admonition_warning" => res.r#type = AdmonitionType::WARNING,
                _ => {}
            }
        }

        Ok(res)
    }
}

impl TSParser for List {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        let mut res = Self {
            r#type: match root.kind() {
                "ordered_list" => ListType::Ordered,
                "unordered_list" => ListType::Unordered,
                _ => unreachable!(),
            },
            items: Default::default(),
        };

        for node in root.children(&mut root.walk()) {
            match node.kind() {
                "ol_item" | "ul_item" => {
                    res.items.push(TSParser::parse(node, source)?);
                }
                _ => unreachable!(),
            }
        }

        Ok(res)
    }
}

impl TSParser for ListItem {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert!(matches!(root.kind(), "ul_item" | "ol_item"));

        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            if let "line" = node.kind() {
                res.line = TSParser::parse(node, source)?;
            }
        }

        Ok(res)
    }
}

impl TSParser for Root {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "document");

        let mut v = Self::default();

        for node in root.children(&mut root.walk()) {
            let node = match node.kind() {
                "title0" => Node::DocumentTitle(TSParser::parse(node, source)?),
                "document_attr" => Node::DocumentAttribute(TSParser::parse(node, source)?),
                "line_comment" | "block_comment" => Node::Comment(TSParser::parse(node, source)?),
                "section_block" => Node::SectionBlock(Box::new(TSParser::parse(node, source)?)),
                "ERROR" => Node::Error,
                v => {
                    panic!("{v} doesn't impl.")
                }
            };
            v.children.push(node);
        }

        Ok(v)
    }
}

impl TSParser for Node {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        Ok(Node::Root(TSParser::parse(root, source)?))
    }
}

impl TSParser for DocumentTitle {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "title0");
        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            match node.kind() {
                "line" => {
                    let v = utf8_text(node, source).unwrap();
                    res.title = v.trim_end().into();
                }
                "document_attr" => {
                    let v = DocumentAttribute::parse(node, source)?;
                    res.attrs.push(v);
                }
                "title_h0_marker" => {}
                _ => todo!(),
            }
        }

        Ok(res)
    }
}

impl TSParser for DocumentAttribute {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "document_attr");

        let mut res = Self::default();
        let key = root.child(1).unwrap();
        res.key = utf8_text(key, source)?.into();

        for node in root.children(&mut root.walk()) {
            match node.kind() {
                "attr_name" => {
                    res.key = utf8_text(node, source)?.into();
                }
                "line" => {
                    let v = utf8_text(node, source)?;
                    let mut line = String::default();
                    for item in v.lines() {
                        line += item.replace('\\', "").trim_end();
                    }
                    res.value = Some(line);
                }
                _ => {}
            }
        }

        Ok(res)
    }
}

impl TSParser for Comment {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert!(matches!(root.kind(), "line_comment" | "block_comment"));

        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            if let "body" = node.kind() {
                res.comment = utf8_text(node, source)?.trim_end().into();
            }
        }

        Ok(res)
    }
}

impl TSParser for Title {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        let mut title = Self {
            level: match root.kind() {
                "title1" => TitleLevel::Level0,
                "title2" => TitleLevel::Level1,
                "title3" => TitleLevel::Level2,
                "title4" => TitleLevel::Level3,
                "title5" => TitleLevel::Level4,
                _ => unreachable!(),
            },
            title: Default::default(),
        };

        for ch in root.children(&mut root.walk()) {
            if let "line" = ch.kind() {
                title.title = utf8_text(root, source)?.into()
            }
        }

        Ok(title)
    }
}

impl TSParser for SectionBlock {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "section_block");

        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            match node.kind() {
                "title1" | "title2" | "title3" | "title4" | "title5" => {
                    res.body = Node::Title(TSParser::parse(node, source)?);
                }
                "paragraph" => {
                    res.body = Node::Paragraph(TSParser::parse(node, source)?);
                }
                "unordered_list" | "ordered_list" => {
                    res.body = Node::List(TSParser::parse(node, source)?);
                }
                "admonition" => {
                    res.body = Node::Admonition(TSParser::parse(node, source)?);
                }
                "breaks" => {
                    res.body = Node::Breaks;
                }
                var => panic!("not yet implemented: {var}"),
            }
        }

        Ok(res)
    }
}

impl TSParser for Line {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "line");
        Ok(Self {
            content: utf8_text(root, source)?.trim_end().to_string(),
        })
    }
}

impl TSParser for Paragraph {
    fn parse(root: TSNode<'_>, source: &[u8]) -> ParseResult<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "paragraph");

        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            if node.kind() == "line" {
                res.lines.push(TSParser::parse(node, source)?);
            }
        }

        Ok(res)
    }
}
