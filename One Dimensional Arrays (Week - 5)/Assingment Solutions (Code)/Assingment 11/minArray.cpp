#include <iostream>
#include <climits>
using namespace std;

// * Find the minimum value out of all elements in the array.

int main()
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Min is : " << min;

    return 0;
}