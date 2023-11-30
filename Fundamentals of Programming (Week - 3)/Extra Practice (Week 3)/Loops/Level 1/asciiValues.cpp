#include <iostream>
using namespace std;

// Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.

int main()
{
    // * My Approach ->
    for(int i = 0; i <= 255; i++){
        cout<<"ASCII character of "<<i<<" : "<<char(i)<<endl;
    }

    return 0;
}

    // * Code - Dope Approach ->
    #include <iostream>
    using namespace std;
    int main()
    {
        char c;
        for (int i = 0; i <= 255; i++)
        {
            c = i;
            cout << c << "\n";
        }
        return 0;
    }