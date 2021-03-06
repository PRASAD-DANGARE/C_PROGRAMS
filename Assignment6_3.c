////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountTwo()
// Description   :  Accept Number From User And Count Frequency Of 2 Decimal Number In It
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountTwo(int iNo)
{

    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while(iNo != 0)
    {
        if(iNo % 10 == 2)
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
    int bRet = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CountTwo(iValue);
    printf("%d",bRet);

    return 0;
}