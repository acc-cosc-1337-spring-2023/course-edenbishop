#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
///#include "workspaces/course-edenbishop/src/homework/02_expressions/hwexpressions.cpp"
#include "catch.hpp" 
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get Sales Tax") 
{
	REQUIRE(get_sales_tax_amount(10) == .675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

TEST_CASE("Test Get Tip Amount") 
{
	REQUIRE(get_tip_amount(20, .15) == 3);
	REQUIRE(get_tip_amount(20, .2) == 4);
}
