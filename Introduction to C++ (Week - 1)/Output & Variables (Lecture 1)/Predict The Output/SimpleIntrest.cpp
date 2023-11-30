#include <iostream>
using namespace std;

int main()
{
    float _principle = 1000;
    float _rate = 2.2;
    float _time = 2;

    float _SimpleIntrest = (_principle * _rate * _time) / 100;
    cout << "Simple Intrest : " << _SimpleIntrest;

    return 0;
}