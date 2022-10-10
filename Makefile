
## I'm using the prebuilt wasm-targeting
## clang toolchain from here: https://github.com/WebAssembly/wasi-sdk/releases
## add wasi-sdk to your $PATH
WCC := clang
W_C_API_PATH := ../wasmtime

all: lib/main.wasm bin/main

lib/main.wasm: lib/main.c
	$(WCC) lib/main.c -mexec-model=reactor -o lib/main.wasm

wrun: lib/main.wasm
	wasmtime lib/main.wasm

## Build the c-api and static lib from here: https://github.com/bytecodealliance/wasmtime
## git submodule init
## git submodule update --recursive
## cargo build --release -p wasmtime-c-api
bin/main: bin/main.c
	$(CC) bin/main.c \
       -I $(W_C_API_PATH)/crates/c-api/include \
       -I $(W_C_API_PATH)/crates/c-api/wasm-c-api/include \
       $(W_C_API_PATH)/target/release/libwasmtime.a \
       -lpthread -ldl -lm \
       -o bin/main

brun: lib/main.wasm bin/main
	bin/main
