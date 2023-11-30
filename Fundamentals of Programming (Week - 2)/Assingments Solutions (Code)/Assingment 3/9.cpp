#include <iostream>
using namespace std;

// * Alphabet, Digit or Special Character

int main()
{

    char ch;
    cout << "Enter any character : ";
    cin >> ch;

    int ascii = (int)ch;

    if (((ascii >= 65) && (ascii <= 90)) || ((ascii >= 97) && (ascii <= 122)))
    {
        cout << "It is Alphabet";
    }
    else if ((ascii >= 48) && (ascii <= 57))
    {
        cout << "It is a Digit";
    }
    else
    {
        cout << "It is Special Character";
    }
    return 0;
}