#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Rotate the given array 'a' by k steps, where k is non - negative.
// * Note : k can be greater than n as well where n is the size of the array 'a'.
// * Leetcode Problem - 2 -> Important Question

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
    // * Using vector functions ->
    reverse(b.begin(), b.end());
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


    // Rotate ->

    int k;
    cout << "Enter array rotation : ";
    cin >> k;

    cout << "Normal Array : ";
    display(v);

    n = v.size();

    // When k > n
    if (k > n)
    {
        k = k % n;
    }

    // Reversing k elements ->
    reversePart(0, n - k - 1, v);

    // Reversing rest elements
    reversePart(n - k, n - 1, v);

    // Reversing whole array
    reverse(v);

    cout << "Rotated Array : ";
    display(v);

    return 0;
}