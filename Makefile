wasm:
	EMCC_CFLAGS="-sEXPORTED_RUNTIME_METHODS=ccall,cwrap,cfree,UTF8ToString,stringToUTF8 -Os" cargo build -F wasm --target=wasm32-unknown-emscripten --release
