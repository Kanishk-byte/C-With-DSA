#include <iostream>
using namespace std;

// Print the pattern in form of // * Star Bridge.
/*
*   | | | | | | | | | 
*   | * * * * * * * |
*   | * * *   * * * |
*   | * *       * * |
*   | *           * |
*   | | | | | | | | | 
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    int m = n - 1; // For new lines.
    int nsp = 1;

        // * Upper Line
        for(int l = 1; l <= 2 * n-1; l++){
            cout<<"*"<<" ";
        }

        cout<<endl;

        for(int i = 1; i <= m; i++){
            // * Stars
            for(int j = 1; j <= n - i; j++){
                cout<<"*"<<" ";
            }

            // * Spaces
            for(int k = 1; k <= nsp; k++){
                cout<<" "<<" ";
            }
            nsp += 2;

            // * Stars 
            for(int j = 1; j <= n - i; j++){
                cout<<"*"<<" ";
            }

            cout<<endl;
        }

    return 0;
}