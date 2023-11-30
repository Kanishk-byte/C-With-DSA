#include <iostream>
using namespace std;

// * Profit = SP - CP > 0;
// * Loss = SP - CP < 0;

// * Profit = SP > CP;
// * Loss = SP < CP;

int main()
{

    int _CP;
    cout << "Enter the CP : ";
    cin >> _CP;

    int _SP;
    cout << "Enter the SP : ";
    cin >> _SP;

    if (_SP > _CP)
    {
        cout << "Profit of : "<<(_SP - _CP)<<" "<<"Rs";
    }
    if (_SP == _CP)
    {
        cout<<"No Profit - No Loss";
    }
    
    else
    {
        cout << "Loss of : "<<(_CP - _SP)<<" "<<"Rs";
    }

    return 0;
}