#include <iostream>
using namespace std;

// * Print the following pattern

// * Sample Input : m = 4, n = 6

// * Sample Output :
/*
* * * * * *
*         *
*         *
* * * * * *
*/

int main()
{

    int m, n;

    cout<<"Enter m : ";
    cin >> m;

    cout<<"Enter n : ";
    cin >> n;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                cout << "*" <<" ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}