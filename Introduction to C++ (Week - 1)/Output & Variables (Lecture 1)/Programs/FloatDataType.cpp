#include <iostream>
using namespace std;

int main()
{
    // * Float can store real numbers which are either Integers & Decimal Numbers.

    float x = 5.0;
    float y = 2.0;

    cout << x / y;

    // * cout<<5/2<<endl; -> Integer/Integer = Integer
    // * cout<<5.0/2<<endl; -> Float/Integer = Float
    // * cout<<5/2.0<<endl; -> Integer/Float = Float
    // * cout<<5.0/2.0<<endl; -> Float/Float = Float

    return 0;
}