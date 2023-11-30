#include <iostream>
using namespace std;

// Nested -> Inside anything

int main()
{

    // 1). Divisible by 5 or 3 but not 15.

    int n;
    cout << "Enter a number : ";
    cin >> n;

    // if (n % 5 == 0 || n % 3 == 0)
    // {
    //     if (n % 15 != 0)
    //     {
    //         cout << "Number is divisiible by 5 and 3 but not 15.";
    //     }
    //     else
    //     {
    //         cout << "Not Matching Condition";
    //     }
    // }
    // else
    // {
    //     cout << "Not Matching Condition";
    // }

    // 1). Divisible by 5 and 3.

    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "Number id divisible by both 5 amd 3";
        }
        else
        {
            cout << "Not matching condition";
        }
    }
    else
    {
        cout << "Not matching condition";
    }

    return 0;
}