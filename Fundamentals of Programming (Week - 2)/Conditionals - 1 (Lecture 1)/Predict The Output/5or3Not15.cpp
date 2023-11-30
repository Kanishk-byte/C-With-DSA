#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        cout << "Yes, it is divisible by 5 and 3 but not 15.";
    }
    else
    {
        cout << "Not matching condition.";
    }

    return 0;
}