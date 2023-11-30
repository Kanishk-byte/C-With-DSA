#include <iostream>
using namespace std;

// Print the pattern in form of // * Star Plus.
/* 
*  | | | | | | |
*  |     *     |
*  |     *     |
*  | * * * * * |
*  |     *     |
*  |     *     | 
*  | | | | | | |      
*/

int main()
{

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int mid = n/2 + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == mid || j == mid) cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}