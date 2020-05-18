g = g++
CFLAGS = -Wall -Werror -std=c++17

.PHONY: clean run all

all: ./bin/Search

./bin/Search: ./build/main.o
	$(g) $(CFLAGS) -o ./build/main.o

./build/main.o: ./src/main.cpp
	$(g) $(CFLAGS) -c ./src/main.cpp

clean:
	rm -rf build/*.o
