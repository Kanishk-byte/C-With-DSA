#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* * Case - 1 ->
    vector<int> v(5); // * Size & Capacity is same
    cout << "Size is : " << v.size() << endl;
    cout << "Capacity is : " << v.capacity() << endl;

    /* * Case - 2 ->
    vector<int> v(5); // * When value not given
    cout<<v[4]; // * 0

    /* * Case - 3 ->
    vector<int> v(); // * Size not given
    cout<<v[4]; // * Segmentation Fault

    /* * Case - 4 ->
    vector<int> v(5,7); // * -> Size is given 5 & Value is given 7
    cout<<v[1]; // * 

    /* * Case - 5 ->
    vector<int> v(5,7,8); 
    cout<<v[1]; // * Error, it is not allowed
    */

    return 0;
}