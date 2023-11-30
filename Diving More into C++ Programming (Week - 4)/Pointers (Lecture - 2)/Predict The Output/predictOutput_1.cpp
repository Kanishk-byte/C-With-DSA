#include <iostream>
using namespace std;

// * Predict The Output -> Assume the address of (a) is 1000.

int main()
{

    int a = 15;
    int* ptr = &a;

    int b = ++(*ptr); // * Always write in bracket's to avoid error's.

    cout << a << "  " << b;

    return 0;
}