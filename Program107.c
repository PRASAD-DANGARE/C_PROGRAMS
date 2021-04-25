///////////////////////////////////////////////////////////
//
// Function Name :  OffBit()
// Description   :  Accept Number From User, And OFF The 3 Bit 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask = 0xFFFFFFFB; // mask designing 0x for Hexa decimal, close the 3 bit
    
    unsigned int Result = 0;
    Result = iNo & iMask; // close the 3 bit, if it is 0 remains to 0, if it is 1 then convert into 0
                          // 0 1 = 0 &
                          // in Hexadecimal 1 digit can hold the values from 0 to 15 = (0 to 9 , A To F)  
                          // if i want to convert 1 digit of hexadecimal into binary it require 4 bits how 1+2+4+8 = 15
    return Result;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n"); // 11, 20
    scanf("%u",&iValue);
    
    iRet = OffBit(iValue);
    
    printf("Number after updation : %d\n",iRet); // 11 = 11, 20 = 16
    return 0;
}
