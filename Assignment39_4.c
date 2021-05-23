////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Min()  
// Description   :  Accept Number From User And Return Smallest Digit Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Min(int iNo)
{

    static int i = 0, iMin = 9;

    if(iNo != 0)
    {
        i = iNo % 10;
        if(i < iMin)
        {
            iMin = i;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;

    /*int iDigit = 0, iMin = 9;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;*/
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Digit : ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("Smallest Digit is : %d", iRet);

    return 0;
}