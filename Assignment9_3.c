////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeSum()
// Description   :  Accept Range From User And Return Addition Of All Numbers In Between That Range 
//                  (Range should contains positive numbers only)
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0, iSub = 0;

    if(iStart <= 0 || iStart >= iEnd)
    {
        printf("Invalid Number ");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSub = iSub + iCnt;
        printf("%d ", iCnt);
    }
    return iSub;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is : %d ", iRet);

    return 0;
}