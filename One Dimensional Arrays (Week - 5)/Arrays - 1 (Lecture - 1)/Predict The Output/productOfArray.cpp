#include <iostream>
using namespace std;

// * Product of Array :-

int main()
{

    // * Size of Array
    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    int arr[n];

    // * Elements of Array 
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int product = 1;

    // * Product of the elements of Array 
    for (int i = 0; i <= n - 1; i++)
    {
        product = product * arr[i];
    }

    cout << product;

    return 0;
}