#include <iostream>
using namespace std;

/*
* Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
* Write a C++ program to calculate factorial of a number.
*/

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int fact = 1;

    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }

    if (fact == 0)
        cout << "Factorial is : " << 1;
    else
        cout << "Factorial is : " << fact;

    return 0;
}