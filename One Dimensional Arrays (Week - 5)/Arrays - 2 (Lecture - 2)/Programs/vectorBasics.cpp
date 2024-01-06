#include <iostream>
#include <vector>
using namespace std;

// * Vector Basics ->

int main()
{

    vector<int> v; // Not need to mention the size

    cout << "Initially Size : " << v.size() << endl;
    cout << "Initially Capacity : " << v.capacity() << endl;

    cout << endl;

    // * Inserting elements into Vector's.
    // * For (Inserting / Input) do not use [].
    v.push_back(6);
    cout << "Size (1st Element) : " << v.size() << endl;
    cout << "Capacity (1st Element) : " << v.capacity() << endl;

    cout << endl;

    v[1] = 5; // Garbage Value

    cout << endl;

    v.push_back(1);
    cout << "Size (2nd Element) : " << v.size() << endl;
    cout << "Capacity (2nd Element) : " << v.capacity() << endl;

    cout << endl;

    v.push_back(9);
    cout << "Size (3rd Element) : " << v.size() << endl;
    cout << "Capacity (3rd Element) : " << v.capacity() << endl;

    cout << endl;

    v.push_back(0);
    cout << "Size (4th Element) : " << v.size() << endl;
    cout << "Capacity (4th Element) : " << v.capacity() << endl;

    // * For (Accessing / Updating) you can use [].
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";

    return 0;
}