#include <iostream>
using namespace std;

// * Print the absloute value of integer.
// * Absloute of number = Mod of |number|.

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    // * First Method -> Long
    if (n > 0)
    {
        cout << "The Absloute number is : " << n;
    }
    else // n <= 0
    {
        cout << "The Absloute number is : " << -(n);
    }

    // * Second Method -> Short
    if (n < 0)
    {
        n = -(n);
    }

    cout << "The Absloute number is : " << n;

    return 0;
}