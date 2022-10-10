
#define WASM_EXPORT(name) __attribute__((export_name(name)))
#define WASM_IMPORT(name) __attribute__((import_name(name)))

#include <stdio.h>

WASM_EXPORT("run") void run ();

WASM_IMPORT("hello")
void hello ();

void run ()
{
	hello();
}
