#include <iostream>
using namespace std;

// * Print the following pattern

// * Sample Input : n = 4

// * Sample Output :
/*
*        * * * *
*       * * * *
*      * * * *
*     * * * *
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << "  ";
        }
        for (int j = 0; j < n; ++j)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    return 0;
}