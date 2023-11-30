#include <iostream>
using namespace std;

// Print the pattern in form of // * Star Triangle Reverse.
/*
* * * *
* * *
* *
*
*/

int main()
{

    // * My approach ->
    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
    }

    // * Teacher's Approach ->
    // Row Number + No of stars = n + 1;
    // No of Stars = n + 1 - i;

    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 1 - i); j++)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }


    return 0;
}