//write include statements


//write namespace using statement for cout
#include <iostream>
#include </workspaces/course-edenbishop/src/homework/01_data_types/data_types.cpp>

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int times_nums()
{
	int num; 
	int num1 = 4;
	int result;

	cout << "Enter a number";
	cin >> num;

	// Call the following function
	result = multiply_numbers(num);
	cout << "The results are: " << result << endl;

	result = multiply_numbers(num1);
	cout << "With our seccond number the results are: " << result << endl;
	
	return 0;
}
