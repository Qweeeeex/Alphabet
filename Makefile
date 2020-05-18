g = g++
CFLAGS = -Wall -Werror -c

all: ./bin/Search

./bin/Search: ./build/main.o
	$(g) $(CFLAGS) src/main.cpp

clean:
	rm -rf build/*.o
