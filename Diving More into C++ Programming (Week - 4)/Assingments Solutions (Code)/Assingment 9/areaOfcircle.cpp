#include <iostream>
using namespace std;

// * Write a function to take the radius of a circle as an argument and return its  area.

double area(float rad){

    float area;
    float pi = 3.14;
    area = pi * (rad * rad);

    return area;
}

int main()
{

    float rad;
    cout<<"Enter the Radius : ";
    cin>>rad;

    cout<< "The Area of the Circle is : " << area(rad) << " Units Square ";     

    return 0;
}