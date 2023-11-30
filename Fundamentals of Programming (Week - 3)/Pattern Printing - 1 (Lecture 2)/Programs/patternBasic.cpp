#include <iostream>
using namespace std;

// Print the following Pattern.
// *) *****
// *) *****
// *) *****

int main()
{

    // * Wrong approach ->>

    // * Method - 1 ->
    // cout<<"*****"<<endl<<"*****"<<endl<<"*****"<<endl;

    // * Method - 2 ->
    // int n;
    // cout << "No of rows : ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "*****" << endl;
    // }


    // * Right Approach ->>

    int n;
    cout << "No of rows : ";
    cin >> n;

    int m;
    cout << "No of colums : ";
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}