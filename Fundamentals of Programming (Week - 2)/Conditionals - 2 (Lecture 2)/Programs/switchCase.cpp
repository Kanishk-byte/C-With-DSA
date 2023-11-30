#include <iostream>
using namespace std;

// * Switch Case -> Alternative of if - else.

int main()
{

    // * Basic Syntax ->

    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Hello";
        break;
    case 2:
        cout << "Jiiii";
        break;
    case 3:
        cout << "Kaise ho saareeee";
        break;
    default:
        cout << "Kooch bhi nhi ";
    }

    return 0;
}