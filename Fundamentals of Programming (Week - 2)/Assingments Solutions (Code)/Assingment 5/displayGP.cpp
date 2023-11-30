#include <iostream>
using namespace std;

// * Display this GP - 3,12,48,.. upto ‘n’ terms.
// first term = 3;
// Common Diffrence = 4;

int main()
{

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int a = 3;

    for(int i = 1; i <= n; i++){
        cout<<a<<endl;
        a *= 4;
    }

    return 0;
}