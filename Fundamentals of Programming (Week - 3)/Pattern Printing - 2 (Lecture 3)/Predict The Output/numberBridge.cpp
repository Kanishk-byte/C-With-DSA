#include <iostream>
using namespace std;

// Print the pattern in form of // * Number Bridge.
/*
*   | | | | | | | | | 
*   | 1 2 3 4 5 6 7 |
*   | 1 2 3   5 6 7 |
*   | 1 2       6 7 |
*   | 1           7 |
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
            cout<<l<<" ";
        }

        cout<<endl;

        for(int i = 1; i <= m; i++){

            // * Numbers
            int a = 1;
            for(int j = 1; j <= n - i; j++){
                cout<<a<<" ";
                a++;
            }

            // * Spaces
            for(int k = 1; k <= nsp; k++){
                cout<<" "<<" ";
                a++;
            }
            nsp += 2;

            // * Numbers 
            for(int j = 1; j <= n - i; j++){
                cout<<a<<" ";
                a++;
            }

            cout<<endl;
        }

    return 0;
}