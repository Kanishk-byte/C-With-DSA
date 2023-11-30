#include <iostream>
using namespace std;

// Print the pattern in form of // * Alphabet Square.
/*
* A B C D   Or   a b c d  
* A B C D   Or   a b c d  
* A B C D   Or   a b c d  
* A B C D   Or   a b c d  
*/

int main()
{

    int n;
    cout << "Enter rows : ";
    cin >> n;

    // * For Upercase Alphabets ->
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = j + 64;
            cout << (char)(a) << " ";
        }
        cout << endl;
    }

    // * For Lowercase Alphabets ->
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = j + 96;
            cout << (char)(a) << " ";
        }
        cout << endl;
    }

    return 0;
}