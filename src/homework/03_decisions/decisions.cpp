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
        gradeStr = "A";
    
    else if (grade >= 80 && grade <= 89)
        gradeStr = "B";
    
    else if (grade >= 70 && grade <= 79)
        gradeStr = "C";
    
    else if (grade >= 60 && grade <= 69)
        gradeStr = "D";

    else
        gradeStr = "F";
        
    return gradeStr;

}

string get_letter_grade_using_switch(int grade)
{
    string gradeStr;
    switch (grade)
    
    {
        case 0 ... 59:
            gradeStr = "F";
            break;
        
        case 60 ... 69:
            gradeStr = "D";
            break;
        
        case 70 ... 79:
            gradeStr = "C";
            break;
        
        case 80 ... 89:
            gradeStr = "B";
            break;
            
        case 90 ... 100:
            gradeStr = "A";
            break;

    }
    return gradeStr;
}