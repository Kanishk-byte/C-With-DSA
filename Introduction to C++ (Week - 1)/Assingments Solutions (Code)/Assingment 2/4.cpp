#include <iostream>
using namespace std;

// * Volume odf Clyinder taking radius and height as input.

int main()
{

    int _radius; 
    cout<<"Enter the radius : ";
    cin>>_radius;

    int _height;
    cout<<"Enter the height : ";
    cin>>_height;

    float _pi = 3.14;

    int _volume;
    _volume = _pi * ( _radius * _radius ) * _height;
    cout<<"Volume of Clyinder is : "<<_volume;

    return 0;
}