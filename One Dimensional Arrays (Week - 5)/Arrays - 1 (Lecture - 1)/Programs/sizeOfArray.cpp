#include <iostream>
using namespace std;

// * Size of Array :-

int main()
{

    int arr[] = {
        1, 3, 5, 6, 8, 0, 9, 7, 5, 4, 3, 4, 5, 6, 6, 33, 2, 4, 2, 45, 3, 45, 3, 5, 6, 9};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;

    return 0;
}