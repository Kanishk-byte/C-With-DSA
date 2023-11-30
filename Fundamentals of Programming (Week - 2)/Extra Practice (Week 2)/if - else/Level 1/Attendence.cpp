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
*/

int main()
{

    float classHeld, classAttend;

    cout << "Note <:> Minimum 50% Attendence is mandatory to sit in exam." << endl;
    cout << "Check that, You are Elegible or not." << endl;

    cout << "Enter the total number of Classes Held : ";
    cin >> classHeld;

    cout << "Enter the total number of Classes you Attended : ";
    cin >> classAttend;

    float _percentage;
    _percentage = (classAttend / classHeld) * 100;

    cout << "You have " << _percentage << "%"<< " Attendence" << endl;

    if ((_percentage >= 75) && (_percentage <= 100))
    {
        cout << "You are Elegible.";
    }
    else
    {
        cout << "You are not Elegible to sit in Exams.";
    }

    return 0;
}