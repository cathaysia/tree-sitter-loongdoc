use criterion::{criterion_group, criterion_main, Criterion};
use glob::glob;
use tree_sitter::Parser;

fn bench_loongdoc(contents: &[String]) {
    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_loongdoc::language())
        .unwrap();

    for text in contents {
        parser.parse(text, None).unwrap();
    }
}

fn bench_loongdoc_inline(contents: &[String]) {
    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_loongdoc_inline::language())
        .unwrap();

    for text in contents {
        parser.parse(text, None).unwrap();
    }
}

fn criterion_benchmark(c: &mut Criterion) {
    let mut datas = vec![];
    let mut idx = 0usize;
    glob("**/*.adoc").unwrap().for_each(|item| {
        if let Ok(path) = item {
            if path.is_file() {
                let path = path.to_str().unwrap();
                let data = std::fs::read_to_string(path).unwrap();
                println!("[{idx}] Add {path}");
                datas.push(data);
            }
            idx += 1;
        }
    });
    println!("total {} files need be parsed.", datas.len());

    let mut group = c.benchmark_group("asciidoctor document");

    group.bench_function("block", |b| {
        b.iter(|| {
            bench_loongdoc(&datas);
        })
    });

    group.bench_function("inline", |b| {
        b.iter(|| {
            bench_loongdoc_inline(&datas);
        })
    });
}

criterion_group!(benches, criterion_benchmark);
criterion_main!(benches);
