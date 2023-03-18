#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "/workspaces/course-edenbishop/inc/catch.hpp"
#include "/workspaces/course-edenbishop/src/homework/01_data_types/data_types.cpp"
#include "/workspaces/course-edenbishop/src/homework/01_data_types/data_types.h"

/*To run test case comment out main function in data_types.cpp*/

TEST_CASE("Test Multiply Numbers") 
{
	REQUIRE(multiply_numbers(10) == 50);
}
