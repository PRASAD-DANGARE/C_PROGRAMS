////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Display 1 To 5 On Screen Using Recursion 
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
        printf("%d\t", i);
        i++;
        DisplayR();
    }

    /*for(i = 1; i <= 5; i++)
    {
        printf("%d\t", i);
    }*/
}

int main()
{
    DisplayR();
    return 0;
}