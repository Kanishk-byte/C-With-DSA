#include <iostream>
using namespace std;

// * Find the smallest missing positive element in the sorted Array that contains only positive elements.

int main()
{
    cout << "Enter 5 elements of the array" << endl;
    int a[5];
    for (int i = 0; i <= 4; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    bool flag = false;
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else
            x++;
    }
    if (flag == false)
        cout << x << endl;
    return 0;
}