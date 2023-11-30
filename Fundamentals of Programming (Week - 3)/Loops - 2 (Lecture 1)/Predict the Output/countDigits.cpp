#include <iostream>
using namespace std;

// WAP to count the no. of digits of given number.

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    int count = 0;
    int a = num;
    while (num > 0)
    {
        num /= 10;
        count++;
    }

    if (a == 0)
        cout << 1;
    else
        cout << "Count is : " << count;

    return 0;
}