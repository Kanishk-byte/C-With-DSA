#include <iostream>
using namespace std;

// * Hierarchy of Operators.
// * [ / & * ] have highest hierarchy.
// * Same Hierarchy -> Left to Right.

int main()
{

    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;

// * Logic ->>
/*
*  Step 1 : First, we seprate multiplication and division operators because of high     priority.
*           int i = (2*3/4) + (4/4) + 8 - 2 + (5/8);

*  Step 2 : Then we calculate it from left to right. 

*  Step 3 : (2*3/4) -> Now, multiplication and division have same priority we 
*    calculate from left to right.

*  Step 4 : (6/4) + (4/4) + 8 - 2 - (5/8);

*  Step 5 : (1) + (1) + 8 - 2 - (0);

*  Step 6 : 2 + 8 - 2;

*  Step 7 : 8;
*/
    cout<<i;

    return 0;
}