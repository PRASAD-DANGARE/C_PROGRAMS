////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Display Pattern Input 5 - 2 4 6 8 10 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  12 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        printf("Enter Number Which Is Greater Than 0");
        return;
    }

    printf("\n");
    for(iCnt = 1; iCnt <= 2 * iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}