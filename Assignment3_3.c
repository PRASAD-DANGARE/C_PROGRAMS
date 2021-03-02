////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayFactor()
// Description   :  Accept Number From User And Display Even Factors Of That Numbers
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    DisplayEvenFactor(iValue);
    
    return 0;
}