#include <iostream>
using namespace std;

// * Week number se week day print krna haiiii.

int main()
{

    int day;
    cout << "Enter day number : ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break; // * Compiler does not check case number so we use break.

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid Day Number";
        break;
    }

    return 0;
}