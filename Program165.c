///////////////////////////////////////////////////////////
//
// Description   :  Accept Number And Perform addition Of All Digits Using Recursion 
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  19 May 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int SumDigitR(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        SumDigitR(iNo);
    }
    return iSum;
    
    /*int iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;*/
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = SumDigitR(iValue);
    printf("Addition Of Digits is : %d", iRet);

    return 0;
}