#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);

    /*
    * At -> For (Updation / Printing) of the value.
    v.at(2) = 90;
    cout << v.at(2);
    */

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    cout << endl;

    // * Sort ->
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}