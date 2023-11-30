#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    cout<<a/b<<" "<<"Ouotient"<<endl;
    cout<<a%b<<" "<<"Remainder"<<endl;

    // * % -> Modulo Operator
    // * This operator is used to find the Remainder.

    /* * cout<<2%4<<endl; When a < b then the remainder id always "a" because we can't      
    divide further. */

    // * Properties ->

    // * If a < b then, a % b = a. 
    // * If a % (-b) = a % b = a
    // * If (-a) % b = - (a % b) = -a
    // * If (-a) % (-b) = (-a) % b = - (a % b) = -a

    return 0;
}