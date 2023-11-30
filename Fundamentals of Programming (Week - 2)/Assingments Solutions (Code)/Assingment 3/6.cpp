#include <iostream>
using namespace std;

// * Least Score

int main()
{

    int marks1, marks2, marks3;

    cout << "Enter first side : ";
    cin >> marks1;

    cout << "Enter second side : ";
    cin >> marks2;

    cout << "Enter third side : ";
    cin >> marks3;

    if (marks1 <= marks2 && marks1 <= marks3)
        cout << "A scores the least marks";
    else if (marks2 <= marks1 && marks2 <= marks3)
        cout << "B scores the least marks";
    else
        cout << "C scores the least marks";

    return 0;
}