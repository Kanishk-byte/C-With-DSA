#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    * Method - 1 -> When size is given.
    vector<int> v(5);

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    */

    /*
    * Method - 2 -> When size is not given.
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    */

    /*
    * Method - 3 -> When we take size as a input (Best Method)
    vector<int> v;

    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    */

    return 0;
}