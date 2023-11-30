#include <iostream>
using namespace std;

/*
* WAP to print the sum of a given number and its reverse.
* Sample Input : 12
* Sample Output : 33 [12+21]
*/

int main()
{

    int n;
    cout<< "Enter the number : ";
    cin >> n;

    int temp = n, x = 0;

    while (temp > 0)
    {
        x *= 10;
        x += (temp % 10);
        temp /= 10;
    }

    cout << n + x << endl;

    return 0;
}