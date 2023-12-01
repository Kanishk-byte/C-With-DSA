#include <iostream>
using namespace std;

// * Predict the output :-

int main()
{

    int a = 15, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    *ptr1 = *ptr2;
    cout << a << " " << b << endl;

    return 0;
}