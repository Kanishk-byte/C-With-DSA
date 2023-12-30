#include <iostream>
using namespace std;

// * If the array contains duplicates or not

int main()
{

    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    bool flag = false;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }

    if (flag == true)
    {
        cout << "Yes, duplicates exists";
    }
    else
    {
        cout << "No, Duplicates don't exists" << endl;
    }

    return 0;
}