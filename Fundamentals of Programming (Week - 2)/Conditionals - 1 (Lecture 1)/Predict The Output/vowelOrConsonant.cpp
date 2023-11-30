#include <iostream>
using namespace std;

// Character is Vowel or Consonant

int main()
{

    // * Vowel -> a,e,i,o,u
    // * Consonant -> Which is not an Alphabet

    // * Basic Method

    /*
        if (_ascii == 97)
        {
            cout << "Vowel";
        }
        else
        {
            if (_ascii == 101)
            {
                cout << "Vowel";
            }
            else
            {
                if (_ascii == 105)
                {
                    cout << "Vowel";
                }
                else
                {
                    if (_ascii == 111)
                    {
                        cout << "Vowel";
                    }
                    else
                    {
                        if (_ascii == 117)
                        {
                            cout << "Vowel";
                        }
                        else
                        {
                            cout << "Consonant";
                        }
                    }
                }
            }
        }
    */

    char ch;
    cout << "Enter Alphabet : ";
    cin >> ch;

    int _ascii = (int)ch;

    if ((_ascii >= 97 && _ascii <= 122) || (_ascii >= 65 && _ascii <= 90))
    {
        if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
        {
            cout << "Vowel";
        }
        else
        {
            cout << "Consonant";
        }
    }
    else
    {
        cout << "Character is not a Alphabet";
    }

    return 0;
}