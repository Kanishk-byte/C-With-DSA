#include <iostream>
using namespace std;

// * Global Variable
int a = 9; // * We can call it in any function

void fun()
{
    cout << a;
}

int main()
{
    // * Local Variable
    // * int a = 9; -> Scope is only in its function 

    fun();

    return 0;
}