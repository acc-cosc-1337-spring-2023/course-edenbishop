//add include statements
//write include required statements
#include <iostream>

//add function(s) code here
int factorial(int num)
{
    int total;
    total = 0;
    
    do
    {
        total = num * num;
        num--;
    }

    while (num > 0);
    
    return total;
}

/*int gcd(int num2, num2)
{

}*/