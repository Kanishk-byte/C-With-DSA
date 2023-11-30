#include <iostream>
using namespace std;

int main()
{

    bool p = false;
    bool q = false;
    bool r = true;

    cout << (p == q == r); // * Code always Compiles from left --> to --> right.

    return 0;
}