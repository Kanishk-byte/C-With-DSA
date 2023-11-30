#include <iostream>
using namespace std;

// * Type - Casting -> To change the data - type of an element.

int main()
{
    // * Example ->>
    float x = 7.5;
    int y = (int)x;

    cout << "Typecasted Value : " << y << endl;

    // * Example ->>
    char ch = 'A';
    cout << "Typecasted Value : " << (int)ch + 100;

    return 0;
}