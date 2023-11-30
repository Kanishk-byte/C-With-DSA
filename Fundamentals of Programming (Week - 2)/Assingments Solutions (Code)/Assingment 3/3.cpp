#include <iostream>
using namespace std;

// Check a Year is leap or not.

// * Leap year = Year / 4, Year / 400 but Year !/ 100.

int main()
{

    int year;
    cout << "Enter year : ";
    cin >> year;

    if ((year % 4 == 0) && (year % 400 == 0))
    {
        cout << "Leap year";
    }
    else if (year % 100 == 0)
    {
        cout << "Not a leap year";
    }
    else
    {
        cout << "Not a leap year";
    }

    return 0;
}