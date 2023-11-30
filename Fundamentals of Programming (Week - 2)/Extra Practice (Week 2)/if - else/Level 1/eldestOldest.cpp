#include <iostream>
using namespace std;

// Take input of age of 3 people by user and determine oldest and youngest among them.

int main()
{

    int _person1, _person2, _person3;

    cout << "Enter age of first person : ";
    cin >> _person1;

    cout << "Enter age of second person : ";
    cin >> _person2;

    cout << "Enter age of third person : ";
    cin >> _person3;

    if ((_person1 > _person2) && (_person1 > _person3))
    {
        cout << "Person 1 is oldest."<<endl;
    }
    else
    {
        cout << "Person 1 is youngest."<<endl;
    }

    if ((_person2 > _person1) && (_person2 > _person3))
    {
        cout << "Person 2 is oldest."<<endl;
    }
    else
    {
        cout << "Person 2 is youngest."<<endl;
    }

    if ((_person3 > _person1) && (_person3 > _person2))
    {
        cout << "Person 3 is oldest."<<endl;
    }
    else
    {
        cout << "Person 3 is youngest."<<endl;
    }

    return 0;
}