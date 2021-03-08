////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkZero()
// Description   :  Accept Digit From User, And Check Whether It Contain Zero Or Not 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0, s = 1;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    if(iNo == 0)
    {
        return TRUE;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            s = iDigit;
        }
        iNo = iNo / 10;
    }

    if(s == 0)
    {
        return TRUE;
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else    
    {
        printf("There is no Zero");
    }
    return 0;
}