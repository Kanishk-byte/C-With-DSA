#include <iostream>
using namespace std;

/*
A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895
*/

int main()
{

    int number;
    cout << "Enter a 4 digit number";
    cin >> number;

    int first_digit, second_digit, third_digit, fourth_digit;

    /*Let's assume the number entered is 1234
    number%10 will give 4 and thus the fourth digit
    */

    fourth_digit = number % 10;

    /*
    Now we have fourth digit
    number/10 will give 123
    Again taking the remainder of the division of
    123 by 10 will give 3, the third digit
    */

    number = number / 10;
    third_digit = number % 10;

    number = number / 10;
    second_digit = number % 10;

    number = number / 10;
    first_digit = number % 10;

    cout << "The reversed number is " << (fourth_digit * 1000) + (third_digit * 100) + (second_digit * 10) + (first_digit * 1) << endl;

    return 0;
}