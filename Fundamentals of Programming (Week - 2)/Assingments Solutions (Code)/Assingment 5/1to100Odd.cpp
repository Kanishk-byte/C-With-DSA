#include <iostream>
using namespace std;

// * Print all the odd numbers from 1 to 100.

int main()
{

    // * Method - 1
    // for (int i = 0; i <= 100; i++)
    // {
    //     if (i % 2 != 0)
    //         cout << i << endl;
    // }

    // * Method - 2
    // for (int i = 1; i <= 100; i++)
    // {
    //     cout << i << endl;
    //     i += 1;
    // }

    // * Method - 3
    // int a = 1;
    // for (int i = 1; i <= 100; i++)
    // {
    //     cout << a << endl;
    //     a += 2;
    // }

    // * Method - 4 -> Best Method
    for (int i = 1; i <= 100; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}