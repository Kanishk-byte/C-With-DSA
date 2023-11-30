#include <iostream>
using namespace std;

// * Highest Common Factor :- ( HCF )

// * Method - 1 :- ( Not Optimized )
/*
int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
        { // * i is a common factor
            hcf = i;
        }
    }
    return hcf;
}
*/

// * Method - 2 :- ( Optimized )
int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        if ((a % i == 0) && (b % i == 0))
        { // * i is a common factor
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{

    int a;
    cout << "Enter a : ";
    cin >> a;

    int b;
    cout << "Enter b : ";
    cin >> b;

    cout << "HCF of " << a << " " << "& " << b << " " << "is : " << gcd(a, b);

    return 0;
}

// * One more method for finding HCF which is Euclid's Division Lemma done with Recursion