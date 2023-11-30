#include <iostream>
using namespace std;

// Print the factorial of a given number n.
// * 0! = 1;
// * n! = n! * (n-1)! * (n-2)!. . . . . .

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int factorial = 1;

    for (int i = n; i >= 1; i--)
    {
        if (n == 0)
            cout << true;
        else
            factorial = factorial * i;
    }

    cout << "Factorial is : " << factorial << endl;

    return 0;
}