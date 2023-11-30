#include <iostream>
using namespace std;

// Comparision b/w Area & Circumference of the Circle which one is greatest.

// * Area of Circle = pi * ( r * r )
// * Circumference of Circle = 2 * pi * r

int main()
{

    float _rad, _pi, _area, _circum;

    cout << "Enter the Radius of the Circle : ";
    cin >> _rad;

    _pi = 3.14;

    _area = _pi * (_rad * _rad);
    _circum = 2 * _pi * _rad;

    if (_area > _circum)
    {
        cout << "Area is Greater than Circumference";
    }
    else
    {
        cout << "Circumference is Greater than Area";
    }

    return 0;
}