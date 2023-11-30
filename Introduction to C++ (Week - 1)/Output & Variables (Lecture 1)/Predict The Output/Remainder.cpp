#include<iostream>
using namespace std;

int main ()
{
    int a = 10; // * a is Dividend
    int b = 3;  // * b is Divisor
    int q = a/b; // * q is Quotient
    int r;

    // * a = (b * q) / r; -> Euclid's Formula

    r = a - (b * q);
    cout<<r;

    return 0;
}