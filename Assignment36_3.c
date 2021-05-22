////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Display 5 To 1 On Screen Using Recursion 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  21 May 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayR()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\t", i);
        i--;
        DisplayR();
    }

    /*
    for(i = 5; i >= 1; i--)
    {
        printf("%d\t", i);
    }*/
}

int main()
{
    DisplayR();
    return 0;
}