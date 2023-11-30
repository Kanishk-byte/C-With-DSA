#include <iostream>
using namespace std;

// * Check a number is Composite or not.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is a composite number";
            break;
        } else
        {
            cout<<"Not a composite number";
            break;
        }
        
    }

    return 0;
}