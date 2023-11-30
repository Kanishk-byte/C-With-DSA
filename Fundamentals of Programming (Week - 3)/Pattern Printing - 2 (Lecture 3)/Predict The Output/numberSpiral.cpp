#include <iostream>
using namespace std;

// Print the pattern in form of // * Number Spiral.
/*
*   | | | | | | | | | |
*   |                 |
*   |  4 4 4 4 4 4 4  |
*   |  4 3 3 3 3 3 4  |  
*   |  4 3 2 2 2 3 4  |
*   |  4 3 2 1 2 3 4  | 
*   |  4 3 2 2 2 3 4  | 
*   |  4 3 3 3 3 3 4  | 
*   |  4 4 4 4 4 4 4  | 
*   |                 |
*   | | | | | | | | | |
*/

// * If we write max/min of (a,b) -> min(a,b) :) Then it gives minimum of two numbers

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    for (int i = 1; i <= 2 * n-1; i++)
    {
        for(int j = 1; j <= 2 * n-1; j++){

            int a = i;
            int b = j;

            if(a>n) a = 2*n - i;
            if(b>n) b = 2*n - j;

            int x = min(a,b);

            cout << n - x + 1 <<"    ";
        }

        cout<<endl;
        cout<<endl;

    }

    return 0;
}