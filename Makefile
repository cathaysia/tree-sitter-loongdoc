wasm:
	EMCC_CFLAGS="-sEXPORTED_RUNTIME_METHODS=ccall,cwrap,cfree,UTF8ToString,stringToUTF8 -Os -sSTACK_SIZE=8388608" cargo build -F wasm --target=wasm32-unknown-emscripten --release
