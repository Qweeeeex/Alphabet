#define CATCH_CONFIG_MAIN

#include "../src/check.h"
#include "../lib/catch.hpp"

TEST_CASE("TestCheck1", "SortIsOk") {
	int test1 = check("b", "b");
	int expected = 0;
	REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck2", "SortIsOk2") {
	int test1 = check("a", "b");
	int expected = 1;
	REQUIRE(test1 == expected);
}

TEST_CASE("TestCheck3", "SortIsOk") {
	int test1 = check("b", "a");
	int expected = 1;
	REQUIRE(test1 == expected);
}
