#include <iostream>
using namespace std;

// Print multiplication table of 24, 50 and 29 using loop.

int main()
{

    // * Table of 24 ->
    for (int i = 1; i <= 10; i++)
    {
        cout << "24 * " << i << " = " << (24 * i) << endl;
    }

    cout<<endl;

    // * Table of 50 ->
    for (int i = 1; i <= 10; i++)
    {
        cout << "50 * " << i << " = " << (50 * i) << endl;
    }

    cout<<endl;

    // * Table of 29 ->
    for (int i = 1; i <= 10; i++)
    {
        cout << "29 * " << i << " = " << (29 * i) << endl;
    }

    return 0;
}