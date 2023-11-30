#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << x << endl;
    ++x; // * Pre Increment x -> x + 1
    cout << x << endl;
    x++; // * Post Increment x -> x + 1
    cout << x << endl;
    x--;
    cout << x << endl;
    --x;
    cout << x << endl;

    // * Pre Increment -> First Increment then Print.
    // cout<<++x<<endl;

    // * Post Increment -> First Print then Increment.
    // cout<<x++<<endl;

    return 0;
}