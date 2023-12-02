#include <iostream>
using namespace std;

// * Memory Allocation in Array :- Continous in Nature.

int main()
{

    int arr[4];

    cout << "Address of Array : " << &arr << endl; // * Gives Address of first element.
    cout << "Address of Array : " << arr << endl;  // * Gives Address of first element.

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;

    return 0;
}