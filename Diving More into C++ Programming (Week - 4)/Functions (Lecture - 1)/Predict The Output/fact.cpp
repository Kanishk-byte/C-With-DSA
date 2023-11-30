#include <iostream>
using namespace std;

// * Factorial till (n) number :-

int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Fact of " << i << " : " << fact(i) << endl;
    }

    return 0;
}