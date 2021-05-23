////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reverse()  
// Description   :  Accept Number From User And Return Its Reverse Number Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Reverse(int iNo)
{

    static int i = 0, iRev = 0;

    if(iNo != 0)
    {
        i = iNo % 10;
        iRev = (iRev * 10) + i;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iRev;

    /*int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev; */
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reverse Number is : %d", iRet);

    return 0;
}