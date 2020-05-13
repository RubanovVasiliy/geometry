flags = -Wall -Werror

all: bin build bin/g

bin/g: build/main.o build/func.o
	gcc $(flags) build/main.o build/func.o -o bin/g -lncurses

build/main.o: src/main.c
	gcc $(flags) -c src/main.c -o build/main.o

build/func.o: src/func.c
	gcc $(flags) -c src/func.c -o build/func.o

bin:
	mkdir -p bin

build:
	mkdir -p build

.PHONY: clean

clean:
	rm -rf build bin