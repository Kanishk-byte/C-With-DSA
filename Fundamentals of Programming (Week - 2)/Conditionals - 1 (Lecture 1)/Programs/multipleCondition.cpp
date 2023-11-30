#include <iostream>
using namespace std;

// * Logical Operators -> && and ||

int main()
{

    // * Examples ->>

    // 1) Take input and check it is 3 digit number or not.
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n >= 100 && n <= 999) 
    // * In && operator when both the condition satisfies then code run.
    // * If condition 1 is false then compiler won't check condition 2. 
        {
            cout << "3 Digit Number";
        }
    else
    {
        cout << "Not a 3 digit number";
    } 

    // 2) Take input and check it is 3 divisible by 5 and 3 or not.
    int n;
    cout << "Enter a number : ";
    cin >> n; 

    // * Method 1 ->
    // if (n % 3 == 0 && n % 5 == 0)
    // {
    //     cout << "Divisible by both 5 and 3.";
    // }

    // * Method 2 ->
    if (n % 15 == 0)
    {
        cout << "Divisible by both 5 and 3.";
    }
    else
    {
        cout << "Not Divisible";
    } 

    // 3) Take input and check it is 3 divisible by 5 or 3.
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n % 5 == 0 || n % 3 == 0)
    // * In || operator when only 1 or both the condition satisfies then code run.
    // * If condition 1 is already true then compiler won't check condition 2. 
    {
        cout << "Yes, it is divisible by the given numbers.";
    }
    else
    {
        cout << "Not divisible any given number.";
    }

    return 0;
}