#![no_main]

use libfuzzer_sys::fuzz_target;

fuzz_target!(|data: &[u8]| {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(&tree_sitter_asciidoc::language())
        .unwrap();
    let _ = parser.parse(data, None);
});
