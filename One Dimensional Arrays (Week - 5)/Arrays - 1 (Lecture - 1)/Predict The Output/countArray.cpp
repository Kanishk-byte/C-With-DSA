#include <iostream>
using namespace std;

int main()
{

    // * Size of Array
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    // * Elements of Array
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // * Searching Element
    int x;
    cout << "Enter the element you want to search : ";
    cin >> x;

    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }

    cout << "Count is : " << count;

    return 0;
}