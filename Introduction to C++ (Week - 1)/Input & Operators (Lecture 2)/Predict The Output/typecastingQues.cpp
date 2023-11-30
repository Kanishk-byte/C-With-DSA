#include <iostream>
using namespace std;

// * 1. Take integer as a input & print half of the number.
// * 2. Take float as a input and print fractional part of the real number.
// * Real Numbers = The numbers which contain both [ Rational & Irrational ] numbers.

int main()
{
    // * Half of Number ->>

    int x;
    cout << "Enter the integer : ";
    cin >> x; // x = 7

    float _half;
    _half = (float)x / 2; // _half = 7.00 / 2
    cout << "The half of the number is : " << _half; // 3.5


    // * Fractional Part ->>

    float a;
    cout << "Enter the number : ";
    cin >> a; // x = 7.7

    float _fractional;
    int _integer = (int)a;
    _fractional = a - _integer; // _fractional = 7.7 - 7
    cout << "The fractional part is : " << _fractional; // 0.7

    return 0;
}