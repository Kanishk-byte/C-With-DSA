#include <iostream>
using namespace std;

// Print the following Pattern.
/*
* * * * *
* * * * *
* * * * * 
*/

int main()
{

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