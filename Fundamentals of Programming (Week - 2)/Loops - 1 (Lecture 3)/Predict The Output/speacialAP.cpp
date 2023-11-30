#include <iostream>
using namespace std;

int main()
{

    // * 100, 97, 94, 91, . . . . . 4, 1 -> Upto all positive terms

    // * Not necessary in last method
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;

    // * Method - 1
    // int a = 100;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a = a - 3;
    //     if (a <= 0)
    //     {
    //         break;
    //     }
    // }

    // * Method - 2
    // * 34 times loop chalega.
    // int a = 100;
    // for (int i = 1; i <= 34; i++)
    // {
    //     cout << a << endl;
    //     a = a - 3;
    //     if (a <= 0)
    //     {
    //         break;
    //     }
    // }

    // *** Method - 3
    int a = 100;
    for (; a > 0;)
    {
        cout << a << endl;
        a = a - 3;
    }

    // for (int a = 100; a > 0; a = a - 3)
    // {
    //     cout << a << endl;
    // }

    return 0;
}