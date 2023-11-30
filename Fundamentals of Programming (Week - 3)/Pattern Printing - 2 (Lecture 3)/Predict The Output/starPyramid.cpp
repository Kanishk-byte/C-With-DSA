#include <iostream>
using namespace std;

// Print the pattern in form of // * Star Pyramid.
/*
*   | | | | | | | | | |
*   |       *         |
*   |     * * *       |
*   |   * * * * *     |
*   | * * * * * * *   |
*   | | | | | | | | | |
*/

// * Method - 1 ->
int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " " << " ";
        }
        for (int k = 1; k <= ((2 * i) - 1); k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

// * Method - 2 -> (nst & nsp)

    // int nst = 1;    // * No. of Stars
    // int nsp = n - 1; // * No. of Spaces

    // for(int i = 1; i <= n; i++){
    //     // * Spaces
    //     for(int j = 1; j <= nsp; j++){
    //         cout<<" "<<" "; 
    //     }
    //     nsp--;

    //     // * Stars
    //     for(int k = 1; k <= nst; k++){
    //         cout<<"*"<<" ";
    //     }
    //     nst += 2;
    //     cout<<endl;
    // }

    return 0;
}