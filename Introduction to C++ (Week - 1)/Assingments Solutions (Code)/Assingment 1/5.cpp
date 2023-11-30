#include <iostream>
using namespace std;

// * WAP to find the circumference of a circle with radius 10.

int main()
{

    float _circumference;
    float _radius = 10;
    float _pi = 3.14;

    _circumference = 2 * (_pi * _radius);

    cout<<"Circumference : "<<_circumference;

    return 0;
}