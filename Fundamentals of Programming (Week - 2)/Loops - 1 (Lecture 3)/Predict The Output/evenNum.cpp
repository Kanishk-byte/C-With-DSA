#include <iostream>
using namespace std;

// * Print all the even numbers from 1 to 100.

int main()
{
    /*
    * Method - 1
    for (int i = 2; i <= 100; i += 2)
    {
        cout << i << endl;
    }
    */

    // * Method - 2 
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            cout << i << endl;
    }

    return 0;
}