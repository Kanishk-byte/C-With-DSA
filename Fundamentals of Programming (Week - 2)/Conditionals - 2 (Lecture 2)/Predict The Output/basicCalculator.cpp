#include <iostream>
using namespace std;

// * Basic Calculator

int main()
{

    int num1, num2;

    cout << "Enter First Number : ";
    cin >> num1;

    char ch;
    cout << "Enter Operator : ";
    cin >> ch;

    cout << "Enter Second Number : ";
    cin >> num2;

    int add = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;

    switch (ch == '+')
    {
    case 1: // * We can also write [case '+':]
        cout << add;
        break;
    }

    switch (ch == '-')
    {
    case 1:
        cout << sub;
        break;
    }

    switch (ch == '*')
    {
    case 1:
        cout << mul;
        break;
    }

    switch (ch == '/')
    {
    case 1:
        cout << div;
        break;
    }

    return 0;
}