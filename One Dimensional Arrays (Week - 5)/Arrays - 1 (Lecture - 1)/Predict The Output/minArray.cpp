#include <iostream>
#include<climits>
using namespace std;

// * Find the minimum value present in Array.

int main()
{

    // * Size of Array
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int arr[n];

    // * Elements of Array
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // Minimum of Array
    int min = INT_MAX;
    for (int i = 1; i <= n - 1; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << " is min";

    return 0;
}