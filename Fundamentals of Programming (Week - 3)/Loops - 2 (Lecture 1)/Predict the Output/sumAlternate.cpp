#include <iostream>
using namespace std;

// Print the sum of series : -> 1 - 2 + 3 - 4 + 5 - 6 . . . upto 'n'.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
            sum = sum + i;
        else
            sum = sum - i;
    }

    cout << "Sum is : " << sum << endl;

    return 0;
}