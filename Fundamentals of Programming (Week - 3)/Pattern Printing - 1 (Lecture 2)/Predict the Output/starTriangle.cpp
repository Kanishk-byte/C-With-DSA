#include <iostream>
using namespace std;

// Print the pattern in form of // * Star Triangle.
/*
*
* *
* * *
* * * *
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
            cout << "*"<<" ";
        }
        cout << endl;
    }

    return 0;
}