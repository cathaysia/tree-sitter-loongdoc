use std::time::Duration;

use criterion::{criterion_group, criterion_main, Criterion};
use tree_sitter::Parser;

fn bench_content(text: &[u8]) {
    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_loongdoc_inline::language())
        .unwrap();

    parser.parse(text, None).unwrap();
}

fn criterion_benchmark(c: &mut Criterion) {
    {
        let one_mb = std::fs::read("./1mb.data").unwrap();
        c.bench_function("bench 1MB", |b| {
            b.iter(|| {
                bench_content(&one_mb);
            })
        });
    }
    {
        let mut group = c.benchmark_group("8MB");
        group.warm_up_time(Duration::from_secs(20));
        group.sample_size(50);
        let one_mb = std::fs::read("./8mb.data").unwrap();
        group.bench_function("bench 8MB", |b| {
            b.iter(|| {
                bench_content(&one_mb);
            })
        });
    }
    {
        let mut group = c.benchmark_group("64MB");
        group.warm_up_time(Duration::from_secs(20));
        group.sample_size(10);
        let one_mb = std::fs::read("./64mb.data").unwrap();
        group.bench_function("bench 64MB", |b| {
            b.iter(|| {
                bench_content(&one_mb);
            })
        });
    }
    {
        let mut group = c.benchmark_group("128MB");
        group.warm_up_time(Duration::from_secs(20));
        group.sample_size(10);
        let one_mb = std::fs::read("./128mb.data").unwrap();
        group.bench_function("bench 128MB", |b| {
            b.iter(|| {
                bench_content(&one_mb);
            })
        });
    }
}

criterion_group!(benches, criterion_benchmark);
criterion_main!(benches);
