#include <iostream>
using namespace std;

// * Simple Calculator Using C++.

int main()
{
    // * Calculator of 2 numbers.

    // * First No.
    float _first;
    cout << "Enter first number : ";
    cin >> _first;

    // * Second No.
    float _second;
    cout << "Enter second number : ";
    cin >> _second;

    // * Operator
    char _operator;
    cout << "Select Operation which you want to perform : ";
    cin >> _operator;

    if (_operator == '+')
    {
        // * Addition
        float _Add = _first + _second;
        cout << "Addition is : " << _Add << endl;
    }

    else if (_operator == '-')
    {
        // * Subtraction
        float _Sub = _first - _second;
        cout << "Subtraction is : " << _Sub << endl;
    }

    else if (_operator == '*')
    {
        // * Multiplication
        float _Mul = _first * _second;
        cout << "Multiplication is : " << _Mul << endl;
    }

    else if (_operator == '/')
    {
        // * Division
        float _Div = _first / _second;
        cout << "Division is : " << _Div << endl;
    }

    return 0;
}