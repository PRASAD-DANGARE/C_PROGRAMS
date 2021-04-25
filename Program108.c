///////////////////////////////////////////////////////////
//
// Function Name :  OffBit()
// Description   :  Accept Number From User, And OFF 3 And 7th Bit 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

//      1111        1111        1111        1111        1111        1111        1011        1011
//      F           F             F           F          F           F            B           B

unsigned int OffBit(unsigned int iNo)   // 69       // 0000   0000    0000     0000     0000    0000    0100    0101
{
    unsigned int iMask = 0XFFFFFFBB; // off 3 and 7th bit 
    unsigned int Result = 0;
    
    Result = iNo & iMask; 
    
    return Result;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = OffBit(iValue);
    
    printf("Number after updation : %d\n",iRet);
    return 0;
}
