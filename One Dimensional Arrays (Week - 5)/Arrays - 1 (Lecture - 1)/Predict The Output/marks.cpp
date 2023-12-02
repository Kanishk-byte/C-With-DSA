#include <iostream>
using namespace std;

// * Marks of Student :-

int main()
{

    int n;
    cout << "Enter no. of students : ";
    cin >> n;

    int marks[n]; // 0 to n-1
    cout << "Enter the marks: ";

    // * Input
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> marks[i];
    }

    // * Output
    for (int i = 0; i <= n - 1; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }

    return 0;
}