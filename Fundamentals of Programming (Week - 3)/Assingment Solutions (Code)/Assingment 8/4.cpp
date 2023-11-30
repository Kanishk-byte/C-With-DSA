#include <iostream>
using namespace std;

/*
* Print the following pattern

* Input: n = 5

* Output:
*    *               *
*      *           *
*        *       *
*          *   *
*            *
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    // Printing entire pattern except the bottommost star
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        cout<<"* ";

        int m = 2 * (n - i);
        for (int j = 1; j <= m; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Printing last star
    for (int i = 1; i <= n; i++)
    {
        cout << " ";
    }
    cout<<" * ";

    return 0;
}