#include <iostream>
using namespace std;

// * Write a function to count the number of digits in a number and then print the square of this number.

int countDigitSquare(int num)
{

    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }

    return count * count;
}

int main()
{
    int num;
    cout << "Enter the num : ";
    cin >> num;

    cout << countDigitSquare(num) << endl;

    return 0;
}