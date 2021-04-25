///////////////////////////////////////////////////////////
//
// Function Name :  ToggelBit()
// Description   :  Accept Number As Well As Position From User, & Toggel That Particular Bit 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
        
unsigned int ToggleBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001; // get position for toggle the bit 
    unsigned int iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {   
        return false;
    }

    iMask = iMask << (iPos -1); // aak ghar(bit) pudhe nehi jat
    
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0, iPos = 0, iRet = 0;

    printf("Enter number\n"); // 130, 130
    scanf("%u",&iValue);

    printf("Enter position\n"); // 8, 4
    scanf("%d",&iPos);
    
    iRet = ToggleBit(iValue,iPos);
    
    printf("Updated number is : %u\n",iRet); // 2, 138
    
    return 0;
}