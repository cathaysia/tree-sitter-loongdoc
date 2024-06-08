#![allow(unused_imports)]

use core::panic;

use tracing::*;
use tree_sitter::Node as TSNode;

trait Parser {
    fn parse(root: TSNode<'_>, source: &[u8]) -> anyhow::Result<Self>
    where
        Self: Sized;
}

pub fn parse_loongdoc(source: &[u8]) -> anyhow::Result<Node> {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&tree_sitter_loongdoc::language())?;

    let tree = parser.parse(source, None).unwrap();
    Node::parse(tree.root_node(), source)
}

#[derive(Debug)]
pub enum Node {
    Root(Root),
    DocumentTitle(DocumentTitle),
    DocumentAttribute(DocumentAttribute),
    Comment(Comment),
}

#[derive(Debug, Default)]
pub struct Root {
    pub children: Vec<Node>,
}

#[derive(Debug, Default)]
pub struct DocumentTitle {
    pub title: String,
    pub attrs: Vec<DocumentAttribute>,
}

#[derive(Debug, Default)]
pub struct DocumentAttribute {
    pub key: String,
    pub value: Option<String>,
}

#[derive(Debug, Default)]
pub struct Comment {
    pub comment: String,
}

impl Parser for Root {
    fn parse(root: TSNode<'_>, source: &[u8]) -> anyhow::Result<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "document");

        let mut v = Self::default();

        for node in root.children(&mut root.walk()) {
            let node = match node.kind() {
                "title0" => Node::DocumentTitle(Parser::parse(node, source)?),
                "document_attr" => Node::DocumentAttribute(Parser::parse(node, source)?),
                "line_comment" | "block_comment" => Node::Comment(Parser::parse(node, source)?),
                _ => todo!(),
            };
            v.children.push(node);
        }

        Ok(v)
    }
}

impl Parser for Node {
    fn parse(root: TSNode<'_>, source: &[u8]) -> anyhow::Result<Self>
    where
        Self: Sized,
    {
        Ok(Node::Root(Parser::parse(root, source)?))
    }
}

impl Parser for DocumentTitle {
    fn parse(root: TSNode<'_>, source: &[u8]) -> anyhow::Result<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "title0");
        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            match node.kind() {
                "line" => {
                    let v = node.utf8_text(source).unwrap();
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

impl Parser for DocumentAttribute {
    fn parse(root: TSNode<'_>, source: &[u8]) -> anyhow::Result<Self>
    where
        Self: Sized,
    {
        assert_eq!(root.kind(), "document_attr");

        let mut res = Self::default();
        let key = root.child(1).unwrap();
        res.key = key.utf8_text(source)?.into();

        for node in root.children(&mut root.walk()) {
            match node.kind() {
                "attr_name" => {
                    res.key = node.utf8_text(source)?.into();
                }
                "line" => {
                    let v = node.utf8_text(source)?;
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

impl Parser for Comment {
    fn parse(root: TSNode<'_>, source: &[u8]) -> anyhow::Result<Self>
    where
        Self: Sized,
    {
        assert!(matches!(root.kind(), "line_comment" | "block_comment"));

        let mut res = Self::default();

        for node in root.children(&mut root.walk()) {
            if let "body" = node.kind() {
                res.comment = node.utf8_text(source)?.trim_end().into();
            }
        }

        Ok(res)
    }
}
