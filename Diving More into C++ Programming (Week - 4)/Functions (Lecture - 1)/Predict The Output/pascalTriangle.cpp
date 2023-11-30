#include <iostream>
using namespace std;

// * Pascal Triangle -> Heavily use of nCr.

/*
*                  1
*               1     1
*             1    2     1
*          1    3     3    1
*       1    4     6    4    1
*    1    5    10    10    5    1
*/

// * Factorial Function
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

// * Combination Function
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " "; // * iCj 
        }
        cout << endl;
    }

    return 0;
}