///////////////////////////////////////////////////////////
//
// Function Name :  CheckPrime()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Digit From User And Find The Frequency Of That Digit(check how many times number occures in the digit)
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int DigitFrequency(int iNo, int i)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    if((i < 0) || (i > 9))
    {
        printf("Invalid Digits\n");
        return 0;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == i)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &ivalue1);

    printf("Enter the digit that you want to search ");
    scanf("%d", &ivalue2);

    iRet = DigitFrequency(ivalue1, ivalue2);

    printf("Number of given digits are  : %d ", iRet);

    return 0;
}