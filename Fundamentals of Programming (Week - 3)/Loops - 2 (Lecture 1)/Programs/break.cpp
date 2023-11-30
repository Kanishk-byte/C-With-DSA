#include <iostream>
using namespace std;

// * WAP to check if a number is Prime or not.
// * Prime Number -> Num. which is divisible by 1 or itself. It has no factors otherthan 1 or number itself.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i != 0)
        {
            cout << n << " is a Prime number";
            break;
        }
        else
        {
            cout << "Not a Prime number";
            break;
        }
    }

    return 0;
}