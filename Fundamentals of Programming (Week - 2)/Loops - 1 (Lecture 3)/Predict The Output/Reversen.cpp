#include <iostream>
using namespace std;

// * Print the numbers in Reverse order.

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}