#include <iostream>
using namespace std;

// * Write a function to print squares of first n natural numbers, taking n as argument to the function.

int square(int n)
{
    int square = 1;
    for (int i = 1; i <= n; i++)
    {
        square = (i * i);
    }
    return square;
}

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "The square of the number is " << i << " : " << square(i) << endl;
    }

    return 0;
}