#include <iostream>
using namespace std;

// * Greatest of 3 - numbers.

int main()
{

    int _first, _second, _third;

    cout<<"Enter first number : ";
    cin>>_first;

    cout<<"Enter second number : ";
    cin>>_second;

    cout<<"Enter third number : ";
    cin>>_third;

    if(_first > _second && _first > _third){
        cout<<_first<<" is largest";
    }

    if(_second > _first && _second > _third){
        cout<<_second<<" is largest";
    }

    if(_third > _first && _third > _second){
        cout<<_third<<" is largest";
    }

    return 0;
}