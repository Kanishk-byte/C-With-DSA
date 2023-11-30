#include <iostream>
using namespace std;

// * For Loop -> For automate things & to avoid repetations.
// * i = for loop wala variable (iterator).

int main()
{

    // 10 times "Good Morning".

    // * Using Normal Method.
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;
    cout << "Good Morning" << endl;

    // * Using for loop
    for (int i = 1; i <= 5; i++)
    {
        cout << "Good Morning" << endl;
        cout << "Hello" << endl;
    }

    return 0;
}