#include <iostream>
using namespace std;

// * Pascal triangle with optimized method :-

/*
*                  1
*               1     1
*             1    2     1
*          1    3     3    1
*       1    4     6    4    1
*    1    5    10    10    5    1
*/

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {

        int curr = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << curr << " ";
            curr = curr * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}