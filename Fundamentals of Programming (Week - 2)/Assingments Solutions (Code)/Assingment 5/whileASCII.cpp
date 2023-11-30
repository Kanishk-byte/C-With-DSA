#include <iostream>
using namespace std;

// * Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

int main()
{

    // for (int i = 65; i <= 90; i++)
    // {
    //     cout<<(char)i<<" : "<<i<<endl;
    // }

    int i = 65;
    while (i <= 90)
    {
        cout<<(char)i<<" : "<<i<<endl;
        i++;
    }
    

    return 0;
}