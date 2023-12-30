#include <iostream>
using namespace std;

// * Calculate the product of all the elements in the given array.

int main()
{

    // * Size of Array
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int arr[n];

    // * Elements of Array
    cout << "Enter the elements : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // * Product of Elements of Array
    int product = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        product = product * arr[i];
    }

    // * Product
    cout << "Product is : " << product;

    return 0;
}