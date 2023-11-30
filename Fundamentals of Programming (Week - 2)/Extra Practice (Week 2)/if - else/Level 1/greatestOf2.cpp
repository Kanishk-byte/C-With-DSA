#include <iostream>
using namespace std;

// Take two int values from user and print greatest among them.

int main()
{

    int num1, num2;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is greater";
    }
    else
    {
        if (num2 > num1)
        {
            cout << num2 << " is greater";
        }
        else
        {
            if (num1 == num2)
            {
                cout << num1 << " & " << num2 << " are equal";
            }
        }
    }

    return 0;
}