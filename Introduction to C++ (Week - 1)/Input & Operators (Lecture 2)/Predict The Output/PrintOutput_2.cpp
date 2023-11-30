#include <iostream>
using namespace std;

// * Print the serial number of the Alphabet using ASCII Values and Type - Casting.

int main()
{

    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    int x = (int)ch;

    cout << "The serial no. is : " << (x - 64) << endl;

    return 0;
}