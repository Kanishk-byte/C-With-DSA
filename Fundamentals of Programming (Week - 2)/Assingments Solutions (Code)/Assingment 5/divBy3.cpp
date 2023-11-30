#include <iostream>
using namespace std;

// * Print all numbers from 1 to 100 that are divisible by 3.

int main()
{

    // * Method - 1
    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i % 3 == 0)
    //         cout << i << endl;
    // }

    // * Method - 2 -> Best Method
    for (int i = 3; i <= 100; i += 3)
    {
        cout << i << endl;
    }

    return 0;
}