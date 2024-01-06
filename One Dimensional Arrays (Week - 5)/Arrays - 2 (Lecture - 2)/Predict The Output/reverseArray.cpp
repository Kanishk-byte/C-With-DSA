#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Write a program to reverse a array without using extra array.

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void reverse(vector<int> &b)
{
    // * Using while loop ->
    // int i = 0;
    // int j = b.size() - 1;
    // while (i <= j)
    // {
    // Swap v[i] & v[j]
    //     int temp = b[i];
    //     b[i] = b[j];
    //     b[j] = temp;
    //     i++;
    //     j--;
    // }

    // * Using for lopp ->
    // for (int i = 0, j = b.size() - 1; i <= j; i++, j--)
    // {
    //     int temp = b[i];
    //     b[i] = b[j];
    //     b[j] = temp;
    // }

    // * Using vector functions ->
    // reverse(b.begin(), b.end());
}

void reversePart(int i, int j, vector<int> &v)
{
    while (i <= j)
    {
        // Swap v[i] & v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{

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

    cout << "Normal Array : ";
    display(v);

    // * Reverse Whole array
    // reverse(v);

    // * Reverse Part Of array
    reversePart(0, 2, v);

    cout << "Reversed Array : ";
    display(v);

    return 0;
}