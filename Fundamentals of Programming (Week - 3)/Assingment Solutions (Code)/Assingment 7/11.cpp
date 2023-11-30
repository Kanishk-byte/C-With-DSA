#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter rows : ";
    cin >> n;

    // Printing upper triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // Printing lower triangle
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }

        cout<<endl;
    }

    return 0;
}