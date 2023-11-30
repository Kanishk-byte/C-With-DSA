#include <iostream>
using namespace std;

// * Address of Main and Function is not Same.

void fun(int x, int y) // * Formal Parameters
{
    cout << "Address of fun x : " << &x << endl;
    cout << "Address of fun y : " << &y << endl;
}

int main()
{
    int x = 3;
    int y = 7;

    cout << "Address of main x : " << &x << endl;
    cout << "Address of main y : " << &y << endl;

    fun(x, y); // * Actual Parameters

    return 0;
}