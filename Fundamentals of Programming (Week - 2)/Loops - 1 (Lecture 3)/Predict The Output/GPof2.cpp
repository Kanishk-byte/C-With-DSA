#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    // * GP = 1, 2, 4, 8, 16, 32 . . . upto 'n' - terms.

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }

    return 0;
}