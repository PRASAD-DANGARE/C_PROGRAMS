////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkDigit()  
// Description   :  Accept Character from user and check whether it is digit or not
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int iNo)
{
    if((iNo >= 1) && (iNo <= 9))
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
    int DValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the Digit : ");
    scanf("%d", &DValue);

    bRet = ChkDigit(DValue);
    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}