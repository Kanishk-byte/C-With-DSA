#include <iostream>
using namespace std;

// * Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    // * Method - 1
    // int a = n;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << a << endl;
    //     a = a + n;
    // }

    // * Method - 2 -> Best Method
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << (n * i) << endl;
    }

    return 0;
}