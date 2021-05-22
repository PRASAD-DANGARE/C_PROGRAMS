////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Display * On Screen Using Recursion 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  21 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayR()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("*\t");
        i++;
        DisplayR();
    }

    /*for(i = 1; i <= 5; i++)
    {
        printf("*\t");
    }*/
}

int main()
{
    DisplayR();
    return 0;
}