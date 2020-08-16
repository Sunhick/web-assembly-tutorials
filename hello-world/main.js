function invoke() {
    console.log("Invoking ccall");
    // https://emscripten.org/docs/porting/connecting_cpp_and_javascript/Interacting-with-code.html#interacting-with-code-direct-function-calls
    var result = Module.ccall(
        'helloworld',	// name of the function 
        'string',	    // return type
        ['string'],	    // argument types
        ['sunil']	    // arguments
    );
    console.log(">> " + result);
}

// Module.ccall need to be called after async initialization of webassemby module
// which is hello-world.wasm
setTimeout(invoke, 1000);