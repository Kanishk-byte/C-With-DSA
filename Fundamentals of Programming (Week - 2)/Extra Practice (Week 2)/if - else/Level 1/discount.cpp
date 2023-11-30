#include <iostream>
using namespace std;

/*
A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
*/

int main()
{

    int _unit;

    cout << "Enter how much units you want to buy : ";
    cin >> _unit;

    int _cost;
    _cost = _unit * 100;

    if (_cost > 1000)
    {
        cout << "Your total cost is : " << _cost << " Rs" << endl;
        cout << "Congrats uh won 10% extra discount on your purchase" << endl;
        cout << "Discounted Price : " << _cost - (_cost * .1) << " Rs" << endl;
        cout << "Thankk you for Comming, See uh Soon.";
    }
    else
    {
        cout << "Your total cost is : " << _cost << " Rs" << endl;
        cout << "Thankk you for Coming, See uh Soon.";
    }

    // int quantity,price;
    // cout << "Enter quantity" << endl;
    // cin >> quantity;
    // price = quantity*100;
    // if (price>1000){
    // 	cout << "Total cost is " << price-(price*.1) << endl;
    // }
    // else{
    // 	cout << "Total cost is " << price << endl;
    // }

    return 0;
}