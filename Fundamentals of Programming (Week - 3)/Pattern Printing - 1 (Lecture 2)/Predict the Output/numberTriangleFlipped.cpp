#include <iostream>
using namespace std;

// Print the pattern in form of // * Number Triangle Flipped.
/*
*   | | | | | |
*   |       1 |
*   |     1 2 |  
*   |   1 2 3 |
*   | 1 2 3 4 | 
*   | | | | | |
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // * Spaces or Hashes 
        for (int j = 1; j <= n - i; j++)
        {
            cout <<" "<<" ";
        }

        // * Stars
        for(int k = 1; k <= i; k++)
        {
            cout<< k <<" ";
        }
        cout << endl;
    }

    return 0;
}