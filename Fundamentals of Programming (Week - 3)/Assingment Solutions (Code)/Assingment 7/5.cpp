#include <iostream>
using namespace std;

// * Print the following pattern

// * Input n = 4

// * Output:
/*
*
* *
* * *
* * * *
* * *
* *
*
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    // Printing upper triangle
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << "*" <<" ";
        }

        cout << endl;
    }

    // Printing lower triangle
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            cout << "*" <<" ";
        }

        cout << endl;
    }

    return 0;
}