#include <iostream>
using namespace std;

// Character is Alphabet or not.
// Capital Letters -> 65 to 90
// Small Letters -> 97 to 122

int main()
{

    // Taking Character Input
    char ch;
    cout<<"Enter any Character : ";
    cin>>ch;

    // Converting ASCII Value
    int _ASCII = int(ch);

    // Checking character is Alphabet or not
    if((_ASCII >= 65 && _ASCII <= 90) || (_ASCII >= 97 && _ASCII <= 122)){
        cout<<"Character is Alphabet";
    } else {
        cout<<"Not an Alphabet";
    }


    return 0;
}   