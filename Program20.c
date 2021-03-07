///////////////////////////////////////////////////////////
//
// Function Name :  CheckPrime()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Digit From User And Return Addition Of All Digits Of That Number
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0, iSum = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);
    printf("Sum is : %d", iRet);

    return 0;
}