#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Write a program to copy the contents of the one array into another in the reverse order

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v1;

    int n;
    cout << "Enter Array size : ";
    cin >> n;

    cout << "Enter Array elements : ";

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v1.push_back(num);
    }

    cout<<"Normal Array : ";
    display(v1);

    vector<int> v2(v1.size());

    for (int i = 0; i <= v1.size(); i++)
    {
        // i + j = size -1
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
    }

    cout<<"Reversed Array : ";
    display(v2);

    return 0;
}