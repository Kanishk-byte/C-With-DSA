#include <iostream>
using namespace std;

// * Given two numbers a and b, write a function to print all odd numbers between them.

void printoddnum(int a, int b)
{
    if (a > b)
    {
        swap(a,b);
        // printoddnum(a, b);
        // return;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }
    }
}

int main()
{

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    printoddnum(a, b);

    return 0;
}