#include <iostream>
using namespace std;

/*
* Print the following pattern

* Input: n = 4

* Output:
*        A
*      A B C
*    A B C D E
*  A B C D E F G
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
        for (int j = 0; j < 2 * i + 1; ++j)
        {
            cout << (char)('A' + j) << " ";
        }

        cout << endl;
    }

    return 0;
}