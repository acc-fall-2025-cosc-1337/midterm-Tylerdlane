#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test binary_to_decimal")
{
	REQUIRE(binary_to_decimal("0") == 0);
	REQUIRE(binary_to_decimal("1") == 1);
	REQUIRE(binary_to_decimal("10") == 2);
	REQUIRE(binary_to_decimal("11") == 3);
	REQUIRE(binary_to_decimal("100") == 4);
	REQUIRE(binary_to_decimal("101") == 5);
	REQUIRE(binary_to_decimal("110") == 6);
	REQUIRE(binary_to_decimal("111") == 7);
	REQUIRE(binary_to_decimal("1000") == 8);
	REQUIRE(binary_to_decimal("1111") == 15);
	REQUIRE(binary_to_decimal("10000") == 16);
	REQUIRE(binary_to_decimal("10101") == 21);
}

TEST_CASE("Test binary_to_decimal with invalid input")
{
	REQUIRE_THROWS(binary_to_decimal(""));
	REQUIRE_THROWS(binary_to_decimal("123")); 
	REQUIRE_THROWS(binary_to_decimal("abc"));
	REQUIRE_THROWS(binary_to_decimal("2"));
}

