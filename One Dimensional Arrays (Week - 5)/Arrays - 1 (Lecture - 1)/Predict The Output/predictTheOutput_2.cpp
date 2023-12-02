#include <iostream>
using namespace std;

// * Predict the output :-

int main()
{

    int size;
    cin >> size;

    int arr[size];
    for (int i = 1; i <= size; i++) // * i was undeclared.
    {
        cin >> arr[i];
        cout << arr[i];
    }

    return 0;
}