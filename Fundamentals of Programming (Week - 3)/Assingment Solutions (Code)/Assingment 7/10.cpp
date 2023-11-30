#include <iostream>
using namespace std;

/*
* Print the following pattern

* Sample Input : n = 4

* Output :
*        1
*      2 1
*    3 2 1
*  4 3 2 1
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
        for (int j = i + 1; j >= 1; --j)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}