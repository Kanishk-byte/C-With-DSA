#include <iostream>
using namespace std;

/*
* Print first ‘n’ fibonacci numbers.
* Sample Input : 10
* Output : 1 1 2 3 5 8 13 21 34 55
*/

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int f0 = 1, f1 = 1;

    cout << f0 << " " << f1 << " ";

    for (int i = 3; i <= n; i++)
    {
        int next = f0 + f1;
        cout << next << " ";
        f0 = f1;
        f1 = next;
    }

    return 0;
}