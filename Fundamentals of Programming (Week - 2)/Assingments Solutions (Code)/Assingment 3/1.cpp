#include <iostream>
using namespace std;

// Take 2 - Integers print greatest of them.

int main()
{

    int _first, _second;

    cout << "Enter first integer : ";
    cin >> _first;

    cout << "Enter second integer : ";
    cin >> _second;

    if (_first > _second)
        cout << _first << " is greatest";
    else
        cout << _second << " is greatest";

    return 0;
}