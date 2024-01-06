#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is :" << v.capacity() << endl;

    v.pop_back();
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is :" << v.capacity() << endl;

    return 0;
}