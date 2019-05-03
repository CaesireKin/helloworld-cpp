build: hello-world.o
	g++ -o bin/helloworld build/hello-world.o

hello-world.o: src/hello-world.cpp
	g++ -c -o build/hello-world.o src/hello-world.cpp