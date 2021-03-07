///////////////////////////////////////////////////////////
//
// Function Name :  CheckPrime()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Digit From User And Find How Many Numbers Are Even In That Digit
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int EvenDigits(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = EvenDigits(iValue);
    printf("Number of even digits are : %d", iRet);

    return 0;
}