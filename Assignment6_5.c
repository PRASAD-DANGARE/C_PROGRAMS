////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Count()
// Description   :  Accept Number From User And Count Frequency Of All Such A Number Which Is Less Than 6
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while(iNo != 0)
    {
        if(iNo % 10 < 6)
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

    iRet = Count(iValue);
    printf("%d", iRet);

    return 0;
}