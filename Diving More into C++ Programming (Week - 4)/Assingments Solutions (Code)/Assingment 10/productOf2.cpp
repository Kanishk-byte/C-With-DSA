#include <iostream>
using namespace std;

// * Find the product of 2 numbers using Pointers :-

int main()
{

    int firstNum;
    cout << "Enter first num : ";
    cin >> firstNum;

    int secondNum;
    cout << "Enter second num : ";
    cin >> secondNum;

    int *ptr1 = &firstNum;
    int *ptr2 = &secondNum;

    int product = ((*ptr1) * (*ptr2));
    cout << "Product using pointer : " << product << endl;

    return 0;
}