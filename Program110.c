///////////////////////////////////////////////////////////
//
// Function Name :  CheckBit()
// Description   :  Accept Number From User, And Check Whether 5th Bit Is ON Or Not 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
/*
                    iNo         0   0   0   1   0   0   1   0
                    iMask       0   0   0   1   0   0   0   0             &
                        ____________________________________________
                    iResult     0   0   0   1   0   0   0   0             input 18 with 5th bit is on
*/

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000010; // check whether 5 bit is on or off
    unsigned int iResult = 0;
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
    unsigned int iValue = 0;
    bool bRet;
    
    printf("Enter number\n"); // 18, 2
    scanf("%u",&iValue);
    
    bRet = CheckBit(iValue);
    
    if(bRet == true)
    {
        printf("5th bit is on\n"); // 18
    }
    else
    {
        printf("5th bit is off\n"); // 2
    }
    return 0;
}