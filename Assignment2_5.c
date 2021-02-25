////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkEven()
// Description   :  Accept Number From User And Check Whether It Is Even Or Odd Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Feb 2021
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2 ) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf(" Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE) 
    {
        printf(" Even Number ");
    }
    else
    {
        printf(" Odd Number ");
    }

    return 0;
}

