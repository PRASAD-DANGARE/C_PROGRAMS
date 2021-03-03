////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumNonFact()
// Description   :  Accept Number From User And Display Summation Of Non Factors Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  03 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;

    /*for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
    }
    printf("Summation Of Factors Is %d\n", iSum1);
    */

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
            iSum2 = iSum2 + iCnt;
        }
    }
    printf("\nSummation Of Non Factors Is %d\n", iSum2);
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);
    
    SumNonFact(iValue);  
    
    return 0;
}