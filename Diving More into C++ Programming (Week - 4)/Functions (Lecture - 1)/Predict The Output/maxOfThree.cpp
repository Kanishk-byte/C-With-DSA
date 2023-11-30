#include <iostream>
using namespace std;

int maxthree(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a = 2, b = 4, c = 7;
    cout << maxthree(a, b, c);
    return 0;
}