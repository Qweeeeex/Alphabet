g = g++
CFLAGS = -Wall -std=c++17

all: ./bin/Search

test: ./bin/Search-test

./bin/Search: ./build/main.o ./build/check.o
	$(g) $(CFLAGS) -o ./bin/Search ./build/main.o ./build/check.o

./build/main.o: ./src/main.cpp
	$(g) $(CFLAGS) -o ./build/main.o -c ./src/main.cpp

./build/check.o: ./src/check.cpp
	$(g) $(CFLAGS) -o ./build/check.o -c ./src/check.cpp

test: ./bin/Search-test

./bin/Search-test: ./build/test/main.o ./build/check.o
	$(g) $(CFLAGS) -o ./bin/Search-test ./build/test/main.o ./build/check.o

./build/test/main.o: ./test/main.cpp
	$(g) $(CFLAGS) -o ./build/test/main.o -c ./test/main.cpp

clean:
	rm -rf ./build/*.o
