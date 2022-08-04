
build: node.c func.h func.c
	mkdir build
	gcc -c func.c
	gcc -c node.c
	gcc node.o func.o -o mainExe
	mv node.o func.o mainExe ./build

clean:
	rm -r ./build

run:
	./build/mainExe