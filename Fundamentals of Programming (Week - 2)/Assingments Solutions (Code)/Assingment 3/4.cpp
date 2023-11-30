#include <iostream>
using namespace std;

// * Area and Perimeter of Rectangle.

// * Area = length * width
// * Perimeter = 2 * (length + width)

int main()
{

    int length, width, area, perimeter;

    cout << "Enter length : ";
    cin >> length;

    cout << "Enter width : ";
    cin >> width;

    area = (length * width);
    perimeter = 2 * (length + width);

    if (area > perimeter)
    {
        cout << "Area is greater than Perimeter";
    }
    else
    {
        cout << "Area is greater than Perimeter";
    }

    return 0;
}