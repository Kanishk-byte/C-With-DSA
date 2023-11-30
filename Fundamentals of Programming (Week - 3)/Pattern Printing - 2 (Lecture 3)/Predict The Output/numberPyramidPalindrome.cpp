#include <iostream>
using namespace std;

// Print the pattern in form of // * Number Pyramid Palindrome.
/*
*   | | | | | | | | | |
*   |       1         |
*   |     1 2 1       |
*   |   1 2 3 2 1     |
*   | 1 2 3 4 3 2 1   |
*   | | | | | | | | | |
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // * Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " " << " ";
        }

        // * Numbers
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }

        // * Numbers Reverse
        for(int l = i - 1; l >= 1; l--){
            cout<< l << " ";
        }

        cout << endl;
    }

    return 0;
}