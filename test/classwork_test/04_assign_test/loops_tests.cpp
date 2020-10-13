#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

#include "loops.cpp"
#include "loops.h"

TEST_CASE("testing the factorial function") 
{
    CHECK(factorial(1) == 1);
    CHECK(factorial(3) == 6);
    CHECK(factorial(4) == 24);
    CHECK(factorial(5) == 120);
}