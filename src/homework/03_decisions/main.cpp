//write include statements
#include <iostream>
#include <string>
#include "decisions.h"
//#include "decisions.cpp"

using std::cout; using std::cin; using std::string;

int main() 
{
	int grade,
	    answer;

	// Display menu
	cout << "------------------------\n";
	cout << "\tMENU\n";
	cout << "------------------------\n";
	cout << "\nWhich method would you like to use to process you grade? \nEnter a number to respond.\n";
	cout << "1-Letter grade using if\n";
	cout << "2-Letter grade using switch\n";
	cout << "3-Exit\n";
	cin >> answer;

	switch (answer)
	{
	    case 1:
	        cout << "Enter in you grade: ";
	        cin >> grade;

	        // Check response for correct number
	        if (grade < 1 || grade > 100)
			{
	            cout << "ERROR - Grade should be a number between 1 and 100.";
		        cout << "Please enter a new number";
		        cin >> grade;
			}

			else
		        cout << "\nUsing if, the grade is: " << get_letter_grade_using_if(grade);
				break;


	    case 2:

	        cout << "Enter in your grade: ";
	        cin >> grade;

	        // Check response for correct number
	        if (grade < 1 || grade > 100)
			{
	            cout << "ERROR - Grade should be a number between 1 and 100.";
		        cout << "Please enter a new number";
		        cin >> grade;
			}

			else
	            cout << "\nUsing switch, the grade is: " << get_letter_grade_using_switch(grade);
				break;

	    
		case 3:
	        cout << "Stopping program... \n";

	
	    default:
		    // Check for correct input
	        if (answer < 1 && answer > 3)
	            cout << "ERROR - Grade should be a number between 1 and 3.";
		        cout << "Please enter a new number";
		        cin >> answer;

	}
	return 0;
}