#include <iostream>
using namespace std;

/*
Write a program to check if a year is leap year or not.
If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.
*/

int main()
{

    int year;
    cout << "Enter the year : ";
    cin >> year;

    if ((year % 4 == 0) && (year % 400 == 0))
    {
        cout << "It is leap year";
    }
    else if (year % 100 == 0)
    {
        cout << "It is not a leap year";
    }
    else
    {
        cout << "Invalid year";
    }

    return 0;
}