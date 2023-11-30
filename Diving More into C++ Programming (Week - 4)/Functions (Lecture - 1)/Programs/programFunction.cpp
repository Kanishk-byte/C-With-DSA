#include <iostream>
using namespace std;

// * Program which runs with the help of a function.

int main()  // * This is also a function.
{

    // * Method - 1 :-

    // /*
    int n;
    cout << "Enter Rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    n++;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    n++;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    // */

    // * Method - 2 :-

    /*
    int n;
    for (int k = 1; k <= 3; k++)
    {
        cout<<"Enter Rows : ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }
    }
    */

    return 0;
}