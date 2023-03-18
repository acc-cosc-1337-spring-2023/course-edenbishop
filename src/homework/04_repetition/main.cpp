//write include statements
//write include required statements
#include <iostream>
#include "dna.h"
#include "dna.cpp"
using std::cout;
using std::cin;

int main() 
{
	int choice,
	    num,
		num2,
		num3;


	cout << "Hello please pick an option below: \n";
	cout << "\n\t MENU \n";
	cout << "\n1-Factorial";
    cout << "\n2-Greatest Common Divisor";
    cout << "\n3-Exit\n";
	cin >> choice;

	switch(choice)
	{
		case 1:
			cout << "Please enter a number to be used for a factorial: \n";
			cin >> num;

			cout << "The answer using factorial is: " << factorial(num);

		    break;

		case 2:
		    cout << "Please enter a number to find the greatest common divisor: \n";
			cin >> num2;

			//cout << "The answer looking for the greatest common divisor is: " << gcd(num2, num3);

		    break;

		case 3:
		    cout << "Quitting the program... ";

		    break;
	}

	return 0;
}