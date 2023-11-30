#include <iostream>
using namespace std;

// * On which axis the points lying

int main()
{
    float x, y;

    cout << "Enter the points of x - axis & y - axis : ";
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "The point is on the origin.";
    if (x == 0 && y != 0)
        cout << "The point lie on the y-axis.";
    if (x != 0 && y == 0)
        cout << "The points lie on the x-axis.";
    if (x != 0 && y != 0)
        cout << "The points lie on the plane.";

    return 0;
}