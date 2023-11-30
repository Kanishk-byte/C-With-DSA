#include <iostream>
using namespace std;

// * Star Triangle with Function.

void starTriangle(int x) // * Here, is a Argument.
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    starTriangle(3); // * 3, is a value of Argument 
    starTriangle(4);
    starTriangle(5);

    return 0;
}