#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Find the Doublet in the array whose sum is equal to the given value x.
// * Leetcode Problem - 1 -> Important Question

int main()
{

    int x;
    cout << "Enter Target : ";
    cin >> x;

    vector<int> v;

    int n;
    cout << "Enter Array size : ";
    cin >> n;

    cout << "Enter Array elements : ";

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i <= v.size() - 2; i++)
    {
        for (int j = i + 1; j <= v.size() - 1; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

    return 0;
}