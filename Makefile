g = g++
CFLAGS = -Wall -Werror -std=c++17

.PHONY: clean run all

all: /bin/Search

/bin/Search: /build/main.o
	$(g) $(CFLAGS) /build/main.o -o Search.exe

/build/main.o: /src/main.cpp
	$(g) $(CFLAGS) -c /src/main.cpp

clean:
	rm -rf build/*.o
