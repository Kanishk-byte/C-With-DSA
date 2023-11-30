#include <iostream>
using namespace std;

/*
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
*/

int main()
{

    float _classHeld, _classAttend;

    cout << "Note : Minimum 75% Attendence is mandatory to sit in exam." << endl;
    cout << "Check that, You are Elegible or not." << endl;

    cout << "Enter the total number of Classes Held : ";
    cin >> _classHeld;

    cout << "Enter the total number of Classes you Attended : ";
    cin >> _classAttend;

    float _percentage;
    _percentage = (_classAttend / _classHeld) * 100;

    cout << "You have " << _percentage << "%"
        << " Attendence" << endl;

    if (_percentage < 75)
    {

        char _medical;
        cout<<"Do you have any medical certificate"<<endl;
        cout<<"Enter 'Y' if uh have medical : ";
        cin>>_medical;

        if (_medical == 'Y')
        {
            cout << "You are Elegible.";
        }
        else
        {
            cout << "You are not Elegible to sit in Exams.";
        }
    }
    else
    {
        cout << "You are Elegible.";
    }

    return 0;
}