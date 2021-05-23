////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Accept Input From User And Display That Number In Reverse Order With * Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayR(int iNo)
{
    static int i = 1;
    
    if(iNo >= i)
    {
        printf("%d\t*\t", iNo);
        iNo--;
        DisplayR(iNo);
    }

    /*int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t*\t", i);
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