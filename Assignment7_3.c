////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange()
// Description   :  Accept Number From User And Return Count Of Digits In Between 3 To 7
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountRange(int iNo)
{

    int iDigit = 0, iCnt = 0;
    
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while(iNo != 0)
    {
        if((iNo % 10 < 7) && (iNo % 10 > 3))
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

    iRet = CountRange(iValue);
    printf("%d", iRet);

    return 0;
}