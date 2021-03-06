////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountFour()
// Description   :  Accept Number From User And Count Frequency Of 4 Decimal Number In It
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while(iNo != 0)
    {
        if(iNo % 10 == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);
    printf("%d", iRet);

    return 0;
}