#include <iostream>
using namespace std;

// * Based on Shorthand of Operators. Let input:- 2 3

int main()
{

    int x, y;
    cin >> x >> y;

    x += y;
    x -= y;
    x %= y;

    cout << x;

    return 0;
}