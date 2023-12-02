#include <iostream>
using namespace std;

// * Linear Search :- (Imp)

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

    // * Searching Element
    int x;
    cout << "Enter the element you want to search : ";
    cin >> x;

    // * Checkmark
    bool flag = false;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
        }
    }

    // * Output
    if (flag == true)
        cout << x << " is present in Array" << endl;
    else
        cout << x << " is not present in Array" << endl;

    return 0;
}