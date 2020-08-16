hello-world.wasm: hello-world.cc
	em++ -s WASM=1 					\
	-s NO_EXIT_RUNTIME=1 				\
	-Os  						\
	-o hello-world.js hello-world.cc 		\
	-s "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall']"

.PHONY: clean
clean:
	rm -rf *~ hello-world.wasm hello-world.js.mem hello-world.js
