////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Accept Number From User & Display That Number On Screen Using Recursion 
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

    if(i <= iNo)
    {
        printf("%d\t", i);
        i++;
        DisplayR(iNo);
    }
    /*int i = 0;

    for(i = 1; i <= iNo; i++)
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