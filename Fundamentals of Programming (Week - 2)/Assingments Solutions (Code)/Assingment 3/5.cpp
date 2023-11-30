#include <iostream>
using namespace std;

// * Type of triangle.

/*
Equilateral -> All Sides are equal
Isoscales -> 2 sides are equal
Scalene -> All sides are diffrent
*/

int main()
{

    int side1, side2, side3;

    cout << "Enter first side : ";
    cin >> side1;

    cout << "Enter second side : ";
    cin >> side2;

    cout << "Enter third side : ";
    cin >> side3;

    if (((side1 == side2) && (side2 == side3)))
    {
        cout << "Triangle is Equaliteral";
    }
    else if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
        cout << "Triangle is Isoscales";
    }
    else
    {
        cout << "Triangle is Scalene";
    }

    return 0;
}