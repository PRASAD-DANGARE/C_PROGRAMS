///////////////////////////////////////////////////////////
//
// Function Name :  CheckBit()
// Description   :  Accept Number From User, And Check Whether 3,5,7th Bit Is ON Or Not 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/*
                    iNo         0   1   0   1   0   1   1   0
                    iMask       0   1   0   1   0   1   0   0     &
                               ________________________________
                    iResult     0   1   0   1   0   1   0   0
*/

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000054;  //0000    0000       0000     0000        0000    0000        0101        0100
    unsigned int iResult = 0;
    iResult = iNo & iMask; // check whether 3,5,7 bit is on
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
    unsigned int iValue = 0;
    bool bRet;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    bRet = CheckBit(iValue);
    
    if(bRet == true)
    {
        printf("3,5,7 bits is on\n");
    }
    else
    {
        printf("Bits are off\n");
    }
    return 0;
}
