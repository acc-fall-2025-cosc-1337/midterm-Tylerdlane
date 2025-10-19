#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("GPA to Letter Grade Conversion") {
	REQUIRE(gpa_to_letter_grade(3.8) == "A");
	REQUIRE(gpa_to_letter_grade(3.2) == "B");
	REQUIRE(gpa_to_letter_grade(2.5) == "C");
	REQUIRE(gpa_to_letter_grade(1.5) == "D");
	REQUIRE(gpa_to_letter_grade(0.8) == "F");
}