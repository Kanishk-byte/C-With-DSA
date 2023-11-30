#include <iostream>
using namespace std;

// * Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
// first term = 4;
// Common Diffrence = 3;

int main()
{

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        a += 3;
    }

    return 0;
}