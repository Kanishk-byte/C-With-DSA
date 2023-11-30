#include <iostream>
using namespace std;

// Print the pattern in form of // * Solid Square.

int main()
{

    int n;
    cout << "Side of Square : "; 
    cin >> n;  

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}