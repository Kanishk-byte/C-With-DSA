#include <iostream>
using namespace std;

// Print the pattern in form of // * Star Cross.
/* 
*  | | | | | | |
*  | *       * |
*  |   *   *   |
*  |     *     |
*  |   *   *   |
*  | *       * | 
*  | | | | | | |      
*/

int main()
{

    int n;
    cout<<"Enter n : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == j || i+j == n+1) cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}