//write include statement for decisions header
#include <iostream>
#include <string>
using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string gradeStr;

    if (grade >= 90 && grade <= 100)
        gradeStr = "You recived an A!";
    
    else if (grade >= 80 && grade <= 89)
        gradeStr = "You recived a B.";
    
    else if (grade >= 70 && grade <= 79)
        gradeStr = "You recived a C.";
    
    else if (grade >= 60 && grade <= 69)
        gradeStr = "You recived a D.";

    else
        gradeStr = "You recived an F.";
        
    return gradeStr;

}

string get_letter_grade_using_switch(int grade)
{
    string gradeStr;
    switch (grade)
    
    {
        case 90 ... 100:
            gradeStr = "You recived an A!";
    
        case 80 ... 89:
            gradeStr = "You recived a B.";

        case 70 ... 79:
            gradeStr = "You recived a C.";
    
        case 60 ... 69:
            gradeStr = "You recived a D.";

        case 0 ... 59:
            gradeStr = "You recived an F.";

    }
    return gradeStr;
}