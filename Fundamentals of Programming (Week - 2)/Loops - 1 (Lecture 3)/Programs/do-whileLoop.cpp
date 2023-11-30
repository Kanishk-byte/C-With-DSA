#include <iostream>
using namespace std;

// * Do - Wlile Loop -> Useless

int main()
{

    int i = 1;

    // * This loop always prints value atleast single time.

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);

    return 0;
}