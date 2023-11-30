#include <iostream>
using namespace std;

// * Swapping 2 Numbers :-

int main()
{

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    cout << "Before Swapping : " << a << "  " << b << endl;

    int temp; // * Temprory Variable to store Values.

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping : " << a << "  " << b << endl;

    return 0;
}