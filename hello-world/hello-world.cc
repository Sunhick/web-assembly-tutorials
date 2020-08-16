#include <iostream>
#include <string>
#include <emscripten/emscripten.h>

#ifdef __cplusplus
extern "C" {
#endif

EMSCRIPTEN_KEEPALIVE
const char* helloworld(char* name) {
  auto greetings = "hello world! welcome to webassembly, " + std::string(name);
  const char* cgreet = greetings.c_str();
  return cgreet;
}

#ifdef __cplusplus
}
#endif

EMSCRIPTEN_KEEPALIVE
int main() {
  // Invoked by default by webassembly side effect of importing hello-world.js
  std::cout << "Hello world from cout" << std::endl;
  return 0;
}
