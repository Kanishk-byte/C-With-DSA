#include <iostream>
using namespace std;

// * Combination & Permutation :-

// * Factorial Function
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}




// * Combination Function
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}

// * Permutation Function
int permutation(int n, int r)
{
    int npr = fact(n) / fact(n - r);
    return npr;
}




// * Main Function
int main()
{
    int n; // * Declaring n
    cout << "Enter n : ";
    cin >> n;

    int r; // * Declaring r
    cout << "Enter r : ";
    cin >> r;

    int ncr = combination(n, r);
    int npr = permutation(n, r);

    cout << "nCr : " << ncr << endl;
    cout << "nPr : " << npr << endl;

    return 0;
}

    /*
    int nfact = fact(n); // * n!
    int rfact = fact(r); // * r!
    int nrfact = fact(n-r); // * (n - r)!
    */


    /* * Lengthy Method :-
    int nfact = 1; // * n!
    for (int i = 2; i <= n; i++)
    {
        nfact *= i;
    }

    int rfact = 1; // * r!
    for (int i = 2; i <= r; i++)
    {
        rfact *= i;
    }

    int nrfact = 1; // * (n - r)!
    for (int i = 2; i <= (n - r); i++)
    {
        nrfact *= i;
    }
    */
