#include <iostream>
using namespace std;

// Predict the Output

int main()
{

    // * C++ gives garbage value to the variable which is not initialized.
    int j;

    while (j <= 10)
    {
        cout << "j" << endl;
        j = j + 1;
    }

    return 0;
}