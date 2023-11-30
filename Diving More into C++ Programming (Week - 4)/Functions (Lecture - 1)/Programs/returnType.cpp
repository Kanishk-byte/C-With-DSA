#include <iostream>
using namespace std;

/*
int sum(int a, int b)
{
    int add;
    add = a + b;
    cout << "Sum is : " << add;
}

int main()
{
    sum(12, 8);
    cout << endl;
    sum(12, 9);

    return 0;
}
*/

int sum(int a, int b)
{
    return a + b; // * Returning a value.
}

int main()
{
    cout << sum(12, 8); // * It acts as a [Integer / Variable], whenever (int & float) datatype is written in a function.  
    cout << endl;
    cout << sum(12, 9); // * It acts as a [Integer / Variable], whenever (int & float) datatype is written in a function.  

    return 0;
}