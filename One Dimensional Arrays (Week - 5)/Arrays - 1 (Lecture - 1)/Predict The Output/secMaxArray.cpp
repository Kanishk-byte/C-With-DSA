#include <iostream>
#include <climits>
using namespace std;

// * Find the maximum value present in an Array.

int main()
{

    // * Size of Array
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // * Maximum number
    // int max = arr[0];
    int max = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    int sMax = INT_MIN; // * Very Small Value
    for (int i = 0; i <= n - 1; i++)
    {
        if ((max != arr[i]) && (sMax < arr[i]))
        {
            sMax = arr[i];
        }
    }

    cout << max << " is max" << endl;
    cout << sMax << " is second max" << endl;

    return 0;
}