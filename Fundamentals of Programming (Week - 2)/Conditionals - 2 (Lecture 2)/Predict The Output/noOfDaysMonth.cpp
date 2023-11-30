#include <iostream>
using namespace std;

// * Print total number of days in a month.

/*
 * 31 days -> January, March, May, July, August, October, and December.
 * 30 days -> April, June, September, November.
 * 28 days -> February
 */

int main()
{

    int monthNumber;
    cout << "Enter Month Number : ";
    cin >> monthNumber;

    switch (monthNumber)
    {
    case 1:
        cout << "31 Days"; // * January
        break;

    case 2:
        cout << "28 Days"; // * February
        break;

    case 3:
        cout << "31 Days"; // * March
        break;

    case 4:
        cout << "30 Days"; // * April
        break;

    case 5:
        cout << "31 Days"; // * May
        break;

    case 6:
        cout << "30 Days"; // * June
        break;

    case 7:
        cout << "31 Days"; // * July
        break;

    case 8:
        cout << "31 Days"; // * August
        break;

    case 9:
        cout << "30 Days"; // * September
        break;

    case 10:
        cout << "31 Days"; // * October
        break;

    case 11:
        cout << "30 Days"; // * November
        break;

    case 12:
        cout << "31 Days"; // * December
        break;

    default:
        cout << "Invalid Month Number";
        break;
    }

    return 0;
}