#[cfg(feature = "wasm")]
fn main() {}

use clap::Parser;
use loongdoc::parse_loongdoc;

#[derive(Debug, clap::Parser)]
struct Args {
    file_name: String,
}

#[cfg(not(feature = "wasm"))]
fn main() {
    setup_log();

    let args = Args::parse();
    println!("{args:?}");
    let source = std::fs::read_to_string(args.file_name).unwrap();

    let node = parse_loongdoc(source.as_bytes()).unwrap();
    println!("{}", serde_json::to_string_pretty(&node).unwrap());
}

#[cfg(not(feature = "wasm"))]
fn setup_log() {
    use tracing_subscriber::{fmt, layer::SubscriberExt, util::SubscriberInitExt, EnvFilter};

    tracing_subscriber::registry()
        .with(EnvFilter::from_default_env())
        .with(
            fmt::layer()
                .with_thread_names(true)
                .with_file(true)
                .with_line_number(true),
        )
        .init();
}
