#include <iostream>
using namespace std;

// Print the nth Fibonacci number.
// * Fibonacci Series -> 1 1 2 3 5 8 13 21 34 55 89. . . . .
// * 3rd term is sum of first 2 terms.
// * fibo(n) = fibo(n-1) + fibo(n-2);

int main()
{

    int n;
    cout << "Enter nth term : ";
    cin >> n;

    int a = 0;
    int b = 1;
    int sum = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }

    cout << "Fibonacci is : " << b;

    return 0;
}