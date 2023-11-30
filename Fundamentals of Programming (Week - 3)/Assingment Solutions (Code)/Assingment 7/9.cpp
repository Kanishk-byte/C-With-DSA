#include <iostream>
using namespace std;

/*
* Print the following pattern

* Sample Input : n = 4

* Output :
*        A
*      A B
*    A B C
*  A B C D
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
        for (int j = 1; j <= i + 1; ++j)
        {
            cout << (char)('A' + j - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}