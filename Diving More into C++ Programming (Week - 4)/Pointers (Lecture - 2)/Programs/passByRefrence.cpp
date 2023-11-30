#include <iostream>
using namespace std;

// * Pass By Refrence :-

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    return 0;
}

int main()
{

    int a, b;

    cin >> a >> b;

    swap(&a, &b);
    cout << a << " " << b;

    return 0;
}