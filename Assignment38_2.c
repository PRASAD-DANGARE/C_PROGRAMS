////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Sum()  
// Description   :  Accept Number From User And Return Summation Of Its Digits Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Sum(int iNo)
{
    static int iDigit = 0, Ans = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        Ans = Ans + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }
    return Ans;
    
    /*int iDigit = 0, Ans = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        Ans = Ans + iDigit;
        iNo = iNo / 10;
    }
    return Ans;*/
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("%d", iRet);

    return 0;
}