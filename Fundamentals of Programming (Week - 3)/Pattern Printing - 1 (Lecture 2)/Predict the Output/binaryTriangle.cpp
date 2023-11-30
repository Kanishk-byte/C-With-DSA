#include <iostream>
using namespace std;

// Print the pattern in form of // * Binary Triangle.
/*
* 1
* 0 1
* 1 0 1
* 0 1 0 1
*/

int main()
{

    // * Method - 1 -> Using Extra Variable.

    int n;
    cout << "Enter rows : ";
    cin >> n;

    int a = 1;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
            a = 1; // Row number odd.
        else
            a = 0; // Row number even.

        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";

            // Flipping
            if (a == 1)
                a = 0;
            else
                a = 1;
        }
        cout << endl;
    }


    // * Method - 2 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}