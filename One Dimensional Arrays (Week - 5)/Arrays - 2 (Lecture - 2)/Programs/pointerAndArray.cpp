#include <iostream>
using namespace std;

// * Pointers & Array

int main()
{

    int arr[] = {4, 2, 6, 1, 7};
    int *ptr = arr; // Giving address to pointer
    cout << ptr << endl;

    ptr[0] = 8; // Changing Value in Array

    for (int i = 0; i <= 4; i++)
    {
        cout << ptr[i] << " "; // Printing all Array elements
        // ptr[i] = i[ptr] = i[arr]; * All are equal *
    }

    return 0;
}