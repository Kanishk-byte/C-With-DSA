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

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping : " << a << "  " << b << endl;

    return 0;
}