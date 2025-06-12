# Emscripten
Compile with
```
	emcc -sEXPORTED_FUNCTIONS=_loadString -sEXPORTED_RUNTIME_METHODS=cwrap -sALLOW_MEMORY_GROWTH -o Source.wasm.js Source.cpp -sSINGLE_FILE
```
