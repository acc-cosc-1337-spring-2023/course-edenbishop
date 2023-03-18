//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::endl;

int main()
{
	double meal_amount, 
	       tip_rate, 
		   tip_amount, 
		   tax_amount,
		   total;
		   
	cout << "Enter the amount of your meal with two decimal spaces: ";
	cin >> meal_amount;

	cout << "Enter the tip rate with two decimal spaces: ";
	cin >> tip_rate;

    tax_amount = get_sales_tax_amount(meal_amount);

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "The total is: $" << total << endl;
	cout << "The total of your meal is: $" << meal_amount << endl;
	cout << "The total of your sales tax is: $" << tax_amount << endl;
	cout << "The total of your tip is: $" << tip_amount << endl;

	return 0;
}
