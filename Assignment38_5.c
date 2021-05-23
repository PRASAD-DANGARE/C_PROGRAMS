////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Mult()  
// Description   :  Accept Number From User And Return Its Product Of Digits Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Mult(int iNo)
{
    static int iDigit = 0, iMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMult;

    /*int iDigit = 0, iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;*/
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}