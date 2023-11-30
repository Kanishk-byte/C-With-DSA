#include <iostream>
using namespace std;

// Print the pattern in form of // * Rhombus.
/*
*   | | | | | | | | | |
*   |       * * * *   |
*   |     * * * *     |  
*   |   * * * *       |
*   | * * * *         | 
*   | | | | | | | | | |
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
        for(int k = 1; k <= n; k++)
        {
            cout<<"*"<<" ";
        }
        cout << endl;
    }

    return 0;
}