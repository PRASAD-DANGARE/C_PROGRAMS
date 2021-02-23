//////////////////////////////////////////////////////////////
//
// Function Name :  Maximum
// Description   :  Accept Number From User And Find The Maximum Number 
// Input         :  Integer, Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  23 Feb 2021
//
//////////////////////////////////////////////////////////////


#include <stdio.h>

int Maximum(int, int); // Function Prototype

int Maximum(int iValue1, int iValue2) // Function Of Maximum
{
    if(iValue1 > iValue2)
    {
        return iValue1;
    }
    else
    {
        return iValue2;
    }
}

int main() // Entry Point Function
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter First Number : ");
    scanf("%d", &iNo1);

    printf("Enter Second Number : ");
    scanf("%d", &iNo2);

    iRet = Maximum(iNo1, iNo2); // Function Call

    printf("Maximum Number Is : %d", iRet);
    return 0; 
}