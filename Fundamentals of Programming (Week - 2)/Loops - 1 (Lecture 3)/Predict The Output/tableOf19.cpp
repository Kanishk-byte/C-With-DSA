#include <iostream>
using namespace std;

// * Print the table of 19.

int main()
{
    /*
    * Method - 1
    * Loop 171 baar chalra hai
    for (int i = 19; i <= 190; i++)
    {
        if (i % 19 == 0)
            cout << i << endl;
    }
    */

    // * Method - 2 ->> Best Method
    for (int i = 19; i <= 190; i += 19)
    {
        cout << i << endl;
    }

    return 0;
}