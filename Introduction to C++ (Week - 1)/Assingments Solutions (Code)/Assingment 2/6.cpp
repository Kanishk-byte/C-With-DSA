#include <iostream>
using namespace std;

// * Based on Hierarchy of Operators.

int main()
{

    int i = (4 + 7 / 5 * 6 * 6 + 9) % 100;
    // * First, we solve bracket part.
    // * In bracket part we solve / & * first in the order of left -> right.
    // * At the end, we solve modulo part.

    cout << i;

    return 0;
}