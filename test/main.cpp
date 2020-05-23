#define CATCH_CONFIG_MAIN

#include "../src/check.h"
#include "../src/Sort.h"
#include "../lib/catch.hpp"

TEST_CASE("TestCheck1", "SortIsOk1") {
	int test1 = check("apple", "apple");
	int expected = 0;
	REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck2", "SortIsOk2") {
	int test1 = check("apple", "car");
	int expected = -1;
	REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck3", "SortIsOk3") {
	int test1 = check("job", "car");
	int expected = 1;
	REQUIRE(test1 == expected);
}
