#include <iostream>
using namespace std;

// * Printing & Taking Input :-

int main()
{

    /*
    * Method - 1 :- Normal Method
    int arr[7] = {6,5,4,3,2,1,0};

    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
    cout<<arr[5]<<" ";
    cout<<arr[6]<<" ";
    */

    // * Method - 2 :- By Loops
    int arr[7];

    // * Input
    for (int i = 0; i <= 6; i++)
    {
        cin >> arr[i];
    }

    // * Output
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}