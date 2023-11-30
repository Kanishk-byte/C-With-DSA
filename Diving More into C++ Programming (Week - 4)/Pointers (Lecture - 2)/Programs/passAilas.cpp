#include <iostream>
using namespace std;

// * Pass Ailas :-

int swap(int &a, int &b) // * Pass by Refrence.
{
    int temp = a;
    a = b;
    b = temp;

    return 0;
}

int main()
{

    int a, b;

    cin >> a >> b;

    swap(a,b);
    cout << a << " " << b;

    return 0;
}