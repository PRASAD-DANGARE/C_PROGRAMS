////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeDisplayEven()
// Description   :  Accept Range From User And Display All Even Numbers In Between That Range
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart >= iEnd)
    {
        printf("Invalid Number");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);
    return 0;
}