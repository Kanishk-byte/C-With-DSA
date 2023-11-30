#include <iostream>
using namespace std;

// * Difference between ASCII of two characters ,take them as input .

int main()
{

    char ch1;
    cout << "Enter first character : ";
    cin >> ch1;

    char ch2;
    cout << "Enter second character : ";
    cin >> ch2;

    int _Ascii1 = (int)ch1 - 64;
    int _Ascii2 = (int)ch2 - 64;

    int _diffrence = (_Ascii1 - _Ascii2);

    cout << "The diffrence is : " << _diffrence;

    return 0;
}