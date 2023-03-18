#include <iostream>
using namespace std;

//Import thr last file and main function
#include "data_types.h"

//Define the multiply numbers function and pass the num1 argument
int multiply_numbers(int num1){
	
	int num2 = 5;
	int total = num1 * num2;

	return total;

}


// Create the main function
int main () {
    int num1 = 10;
	int rVal;
    
    // Call the following function
    rVal = multiply_numbers(num1);

	cout << "The total is: " << rVal << endl;

    return 0;
}
