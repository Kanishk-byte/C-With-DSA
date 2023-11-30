#include <iostream>
using namespace std;

/*
Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then he may work in anywhere

if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

And any other input of age should print "ERROR".
*/

int main()
{

    int age;
    cout << "Enter Age : ";
    cin >> age;

    char sex;
    cout << "Enter Sex (M or F) : ";
    cin >> sex;

    char marital;
    cout << "Enter Marital Status (Y or N) : ";
    cin >> marital;

    if (sex == 'F')
    {
        cout << "She will work only in urban areas.";
    }
    else
    {
        if (sex == 'M')
        {
            if (age >= 20 && age <= 40)
            {
                cout << "He may work in anywhere";
            }
            else if (age >= 40 && age <= 60)
            {
                cout << "He will work in urban areas only.";
            }
        else
        {
            cout << "ERROR!";
        }
        }
    }

    return 0;
}