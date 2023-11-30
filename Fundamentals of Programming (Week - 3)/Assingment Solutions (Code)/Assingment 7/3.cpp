#include <iostream>
using namespace std;

/*
* Print the following pattern

* Input: n = 4

* Output:
* A
* A B
* A B C
* A B C D
*/

int main()
{

    int n;
    cout<<"Enter rows : ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << (char)('A' + j - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}