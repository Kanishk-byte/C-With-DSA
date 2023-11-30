#include <iostream>
using namespace std;

/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/

int main()
{

    int _marks;
    cout << "Enter the marks : ";
    cin >> _marks;

    if (_marks > 80 && _marks <= 100)
    {
        cout << "Your grade is : A";
    }

    else if (_marks > 60 && _marks < 80)
    {
        cout << "Your grade is : B";
    }

    else if (_marks > 50 && _marks < 60)
    {
        cout << "Your grade is : C";
    }

    else if (_marks > 45 && _marks < 50)
    {
        cout << "Your grade is : D";
    }

    else if (_marks > 25 && _marks < 45)
    {
        cout << "Your grade is : E";
    }

    else if (_marks <= 25)
    {
        cout << "Your are : Failed";
    }

    else
    {
        cout<<"Invalid Marks";
    }

    return 0;
}