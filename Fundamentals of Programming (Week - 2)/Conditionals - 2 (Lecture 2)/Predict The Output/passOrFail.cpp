#include <iostream>
using namespace std;

// * If marks > 33 then pass, otherwise fail.

int main()
{

    int marks;
    cout << "Enter the marks of the student : ";
    cin >> marks;

    (marks >= 33) ? cout << "Pass hai ji aapka baacha" : cout << "Bkl fail hogyaa";

    return 0;
}