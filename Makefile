g = g++
CFLAGS = -Wall -Werror -c -std=c++17

.PHONY: clean run all

all: ./bin/Search

./bin/Search: ./build/main.o
	$(g) /build/main.o -o Search.exe

./build/main.o: ./src/main.cpp
	$(g) $(CFLAGS) /src/main.cpp

clean:
	rm -rf build/*.o
