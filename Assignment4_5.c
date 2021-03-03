////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactDiff()
// Description   :  Accept Number From User And Summation Of All Factors & Non Factors Then Subtract Both Factors
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  03 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0, iRet = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {       
        if(iNo % iCnt == 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    printf("Sum of Even Factors is %d\n", iSum2);

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
    }
    printf("Sum Of Non Factors Are %d\n", iSum1);

    iRet = iSum2 - iSum1;
    return iRet;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);
    
    iRet = FactDiff(iValue);
    printf("%d", iRet);

    return 0;
}