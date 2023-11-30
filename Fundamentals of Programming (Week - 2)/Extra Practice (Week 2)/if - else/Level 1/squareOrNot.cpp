#include <iostream>
using namespace std;

// Take values of length and breadth of a rectangle from user and check if it is square or not.

// * Area of Rectangle : Length * breadth
// * Area of Square : Side * Side

int main()
{

    int _length, _breadth;

    cout << "Enter length : ";
    cin >> _length;

    cout << "Enter breadth : ";
    cin >> _breadth;

    int _aor, _aos;

    _aor = _length * _breadth;
    _aos = _length * _breadth;

    if (_length == _breadth)
    {
        cout << "It is a Square" << endl;
        cout << "Area of square is : " << _aos;
    }
    else
    {
        cout << "It is a Rectangle"<<endl;
        cout << "Area of Rectangle is : " << _aor;
    }

    return 0;
}