#include <iostream>
using namespace std;

// Print the pattern in form of // * Number Triangle.
/*
* 1
* 1 2
* 1 2 3
* 1 2 3 4
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j <<" ";
        }
        cout << endl;
    }

    return 0;
}