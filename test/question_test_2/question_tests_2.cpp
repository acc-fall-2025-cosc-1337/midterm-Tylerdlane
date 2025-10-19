#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("roll_die returns values between 1 and 6 inclusive", "roll_die") {
	const int num_trials = 1000; // Number of times to roll the die for testing

	for (int i = 0; i < num_trials; ++i) {
		int roll = roll_die();
		REQUIRE(roll >= 1);
		REQUIRE(roll <= 6);
	}
}