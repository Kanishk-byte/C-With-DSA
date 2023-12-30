#include <iostream>
#include <climits>
using namespace std;

// * Find the second largest element in the given Array in one pass.

int main()
{

    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the element's : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    int secMax = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (max != arr[i] && secMax < arr[i])
        {
            secMax = arr[i];
        }
    }

    cout << "Max is : " << max << endl;
    cout << "Second Max is : " << secMax << endl;

    return 0;
}