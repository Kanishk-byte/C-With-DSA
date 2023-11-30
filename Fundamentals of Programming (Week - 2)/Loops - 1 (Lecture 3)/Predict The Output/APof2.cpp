#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    // * Method - 1 Starts
    // for (int i = 1; i < n; i += 2)
    // {
    //     cout << i << endl;
    // }
    // * Method - 1 Ends


    // * Method - 2 Starts
    // for (int i = 1; i < 2 * n - 1; i += 2)
    // {
    //     cout << i << endl;
    // }
    // * Method - 2 Ends


    // * Method - 3 Starts
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a = a + 2;
    // }
    // * Method - 3 Ends


    // * Another Question Starts
    /*
    * First term = a;
    * Common diffrence = d;
    * AP = 4, 7, 10, 13, 16 . . .

    * a = 4;
    * d = 3;

    * An term = a + (n - 1)d;
    * An term = 4 + (n - 1)3;
    * An term = 4 + 3n - 3;
    * An term = 3n + 1;
*/

    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + 3;
    }
    // * Another Question Ends

    return 0;
}