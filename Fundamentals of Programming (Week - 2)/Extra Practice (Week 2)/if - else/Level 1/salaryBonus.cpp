#include <iostream>
using namespace std;

/*
A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
*/

int main()
{

    int _salary;
    cout << "Enter your salary : ";
    cin >> _salary;

    cout << "Your salary is : " << _salary<<endl;

    int _bonus;
    _bonus = _salary + (_salary * .5);

    cout << "Salary after applying bonus is : " << _bonus;

    return 0;

}