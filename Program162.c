///////////////////////////////////////////////////////////
//
// Description   :  Display * On Screen Using Recursion
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  19 May 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayR()
{   
    static int i = 1; // 1, due to static it preserve the previous value across the function calls
    if(i <= 4) // 2
    {
        printf("*\t"); // 4
        i++; // 3
        DisplayR(); // Recursive Call
    }
}

int main()
{
    DisplayR();
    printf("End Of Main \n");
    return 0;
}