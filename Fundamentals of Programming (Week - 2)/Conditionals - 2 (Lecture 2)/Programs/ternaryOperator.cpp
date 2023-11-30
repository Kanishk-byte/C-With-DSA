#include <iostream>
using namespace std;

// * Ternary Operator -> Cool form of if - else.
/*
 * Cool banne ki Ninja Technique.
 * exp1 ? exp2 : exp3;
 * Condition ? True : False;
 * Not a best Practice.
 * Hierarchy ->> Right to Left.
*/

int main()
{

    int x;
    cout << "Enter value : ";
    cin >> x;

    (x % 2 == 0) ? cout << "Even hai Vaiii." : cout << "Odd haiii yaaraa";

    return 0;
}