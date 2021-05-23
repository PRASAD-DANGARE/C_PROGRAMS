////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Max()  
// Description   :  Accept Number From User And Return Largest Digit Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Max(int iNo)
{
    static int i = 0, iMax = 0;

    if(iNo != 0)
    {
        i = iNo % 10;
        if(i > iMax)
        {
            iMax = i;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;

    /*int iDigit = 0, iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
            if(iMax == 9)
            {
                break;
            }
        }
        iNo = iNo / 10;
    }
    return iMax;*/
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Digits : ");
    scanf("%d", &iValue);

    iRet = Max(iValue);
    printf("Maximum Digit Is : %d", iRet);

    return 0;

}