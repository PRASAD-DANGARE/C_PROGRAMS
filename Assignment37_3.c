////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Accept Number From User & Display That Number In Reverse On Screen Using Recursion 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  21 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayR(int iNo)
{
    static int i = 1;

    if(iNo >= i)
    {
        printf("%d\t", iNo);
        iNo--;
        DisplayR(iNo);
    }

    /*int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t", i);
    }*/
}

int main()
{
    int iValue = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}