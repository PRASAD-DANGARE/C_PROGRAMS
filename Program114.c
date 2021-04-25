///////////////////////////////////////////////////////////
//
// Function Name :  CheckBit()
// Description   :  Accept Number As Well As 2 Position From User, & Check Whether Bit Is ON Or OFF  
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
        
bool CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
    unsigned int iMask1 = 0X00000001, iMask2 = 0X00000001, iMask = 0X00000000; // accept 2 position and check it is on/off
    unsigned int iResult = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {   
        return false;
    }

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iMask = iMask1 | iMask2; // from or operator we can on/combine both the bits of iMask1, iMask2 which create new iResult
    // if we use xor and we give input 4 for both mask then the bit is off, so in this case dont use xor
    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0, iPos1 = 0, iPos2 = 0;
    bool bRet;

    printf("Enter number\n"); // 153 where 1, 4, 5, 8 bit are on, 25 where 1,4,5 are on
    scanf("%u",&iValue);
    
    printf("Enter first position\n"); // 4, 4
    scanf("%d",&iPos1);
    
    printf("Enter second position\n"); // 8, 8
    scanf("%d",&iPos2);
    
    bRet = CheckBit(iValue,iPos1,iPos2);
    
    if(bRet == true)
    {
        printf("Bits are on\n"); // on
    }
    else
    {
        printf("Bits are off\n"); // off
    }
    
    return 0;
}
