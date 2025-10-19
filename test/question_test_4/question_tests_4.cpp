#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("GCD of two numbers within range") {
	REQUIRE(find_gcd(48, 18) == 6);
	REQUIRE(find_gcd(100, 75) == 25);
	REQUIRE(find_gcd(56, 98) == 14);
	REQUIRE(find_gcd(101, 10) == 1);
	REQUIRE(find_gcd(200, 150) == 50);
}