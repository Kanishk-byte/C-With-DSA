#include <iostream>
using namespace std;

// * Case 1 :-
/*
void fun(int x, int y)
{
    cout << x << " " << y;
}

int main()
{
    int x = 7;
    int y = 8;

    fun(x, y);

    return 0;
}
*/

// * Case 2 :-
/*
void fun(int x, int y)
{
    cout << x << " " << y;
}

int main()
{
    fun(7, 8);

    return 0;
}
*/

// * Case 3 :-
/*
void fun(int x = 7, int y = 8) // * Default Values -> When no values is passed in function
{
    cout << x << " " << y;
}

int main()
{
    fun();

    return 0;
}
*/

// * Case 4 :-
/*
void fun(int x = 7, int y = 8) 
{
    cout << x << " " << y;
}

int main()
{
    fun(4,6); // * These values print in the output.

    return 0;
}
*/

// * Case 5 :-
/*
void fun(int x = 7, int y = 8) 
{
    cout << x << " " << y;
}

int main()
{
    fun(4); // * (4  8) print in the output.

    return 0;
}
*/

// * Case 6 :-
/*
void fun(int x = 7, int y) // * Gives Error When you giving default value then give to all otherwise it will give errors. 
{
    cout << x << " " << y;
}

int main()
{
    fun(5,6); 

    return 0;
}
*/

// * Case 7 :-
/*
void fun(int x = 8, float y = 5.2) // * You can give many data - types in default value. 
{
    cout << x << "  " << y;
}

int main()
{
    fun(7.7); 

    return 0;
}
*/

// * Case 8 :-
void fun(int x = 8, bool y = true) 
{
    cout << x << "  " << y;
}

int main()
{
    fun(false); 

    return 0;
}