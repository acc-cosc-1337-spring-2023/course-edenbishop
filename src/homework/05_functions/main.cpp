//write include required statements
#include <iostream>
#include "func.h"
//#include "func.cpp"
using namespace std;


int main() 
{
	int answer;
	string  dna;

	cout << "Hello user, \nToday we will be translating DNA.";
	cout << "\nPlease enter the DNA string using the letters G, C, T, and A: \n";
	cin >> dna;


	cout << "\nPlease enter a menu option: \n";
	cout << "Menu";
	cout << "\n1- Get GC Content";
	cout << "\n2- Get DNA Complement";
	cout << "\n3- Exit \n";
	cin >> answer;

	switch (answer)
	{
		case 1:
		    cout << "The percent of GC content is: \n" << get_gc_content (dna);
			break;

		case 2:
		    cout << "The DNA complement in reverse is: \n" << get_dna_complement(dna) << "\n";
			break;

		case 3:
		    cout << "Stopping program... \n";
			break;
	}

	
	return 0;
}