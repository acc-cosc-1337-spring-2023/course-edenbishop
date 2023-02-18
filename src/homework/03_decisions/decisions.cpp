//write include statement for decisions header
#include <iostream>
#include <string>
using std::string;
using std::cout;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string gradeStr;

    if (grade >= 90 && grade <= 100)
        gradeStr = "You recived an A!\n";
    
    else if (grade >= 80 && grade <= 89)
        gradeStr = "You recived a B.\n";
    
    else if (grade >= 70 && grade <= 79)
        gradeStr = "You recived a C.\n";
    
    else if (grade >= 60 && grade <= 69)
        gradeStr = "You recived a D.\n";

    else
        gradeStr = "You recived an F.\n";
        
    return gradeStr;

}

string get_letter_grade_using_switch(int grade)
{
    string gradeStr;
    switch (grade)
    
    {
        case 0 ... 59:
            gradeStr = "You recived an F.\n";
            break;
        
        case 60 ... 69:
            gradeStr = "You recived a D.\n";
            break;
        
        case 70 ... 79:
            gradeStr = "You recived a C.\n";
            break;
        
        case 80 ... 89:
            gradeStr = "You recived a B.\n";
            break;
            
        case 90 ... 100:
            gradeStr = "You recived an A!\n";
            break;

    }
    return gradeStr;
}