#include <iostream>
using namespace std;

// Marks and Grade.

int main()
{

    // * Normal if - else

    int n;
    cout << "Enter Marks : ";
    cin >> n;

    if (n >= 91 && n <= 100)
    {
        cout << "Excellent";
    }

    if (n >= 81 && n <= 90)
    {
        cout << "Very Good";
    }

    if (n >= 71 && n <= 80)
    {
        cout << "Good";
    }

    if (n >= 61 && n <= 70)
    {
        cout << "Can do better";
    }

    if (n >= 51 && n <= 60)
    {
        cout << "Average";
    }

    if (n >= 41 && n <= 50)
    {
        cout << "Below Average";
    }

    if (n <= 40)
    {
        cout << "Fail";
    }

    return 0;
}