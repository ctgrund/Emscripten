#include <emscripten.h>

extern "C" void loadString() {
	EM_ASM(console.log("within loadString"));
}
