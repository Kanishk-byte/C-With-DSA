#include <iostream>
using namespace std;

// * Passing an Array into Function

void display(int a[], int size) // int* a;
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

void change(int b[], int size) // int* b;
{
    b[0] = 100;
}

int main()
{
    int arr[5] = {1, 4, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;

    // Accessing the elements of Array in another Function.
    // Updation, Pass by (Value / Refrence).

    display(arr, size);
    change(arr, size);
    display(arr, size);

    return 0;
}