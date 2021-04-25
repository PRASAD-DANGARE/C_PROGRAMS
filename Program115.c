///////////////////////////////////////////////////////////
//
// Function Name :  OnBit()
// Description   :  Accept Number As Well As Position From User, If Bit Is OFF Then ON The Bit  
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

unsigned int OnBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001; // accept position and if bit is off, then on the bit
    unsigned int iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {   
        return false;
    }

    iMask = iMask << (iPos-1);
    iResult = iNo | iMask;
    
    return iResult;
}

int main()
{
    unsigned int iValue = 0,iPos = 0, iRet = 0;

    printf("Enter number\n"); // 10, 10
    scanf("%u",&iValue);
    
    printf("Enter position\n"); // 4, 5
    scanf("%d",&iPos);
    
    iRet = OnBit(iValue,iPos);
    
    printf("New number is : %u\n",iRet); // 10, 26
    
    return 0;
}
