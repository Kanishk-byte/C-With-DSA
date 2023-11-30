#include <iostream>
using namespace std;

// Take 10 integers from keyboard using loop and print their average value on the screen.

int main()
{

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        int num;
        cout << "Enter the number : ";
        cin >> num;
        sum += num;
    }

    cout << "Sum of Integers : " << sum << endl;

    float average;
    average = sum / 10.0;
    cout << "Average is : " << average << endl;

    return 0;
}