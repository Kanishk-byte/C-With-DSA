#include <iostream>
using namespace std;

// * Sum of 2 numbers.

int main()
{

    int _firstNum, _secondNum, _Sum;

    cout << "Enter first number : ";
    cin >> _firstNum;

    cout << "Enter second number : ";
    cin >> _secondNum;

    _Sum = _firstNum + _secondNum;
    cout << "The Sum is : " << _Sum << endl;

    return 0;
}