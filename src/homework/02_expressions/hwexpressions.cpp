#include <iostream>
using namespace std;

double get_sales_tax_amount(double meal_amount)
{
	double tax_rate;

	tax_rate = .0675;
	
	return meal_amount*tax_rate;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount*tip_rate;
}


