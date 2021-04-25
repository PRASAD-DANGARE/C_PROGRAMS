///////////////////////////////////////////////////////////
//
// Function Name :  OffBit()
// Description   :  Accept Number As Well As Position From User, If Bit Is ON Then OFF The Bit  
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/*
    iPos = 4
 
    Input                   1       0       1       0       1       1       0       0
                            1       1       1       1       0       1       1       1     &
 __________________________________________________________________________________________
 
    Output                  1       0       1       0       0       1       0       0
 
*/

unsigned int OffBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001; // accept position and if the bit is on, turn it off
    unsigned int iResult = 0;
    
    if((iPos < 1) || (iPos > 32))
    {   
        return 0;
    }
    
    iMask = iMask << (iPos-1);
    
    iMask = ~iMask; // tilda/toggel operator if bit is 1 then it convert into 0
    
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0, iPos = 0, iRet = 0;

    printf("Enter number\n"); // 9, 9
    scanf("%u",&iValue);
    
    printf("Enter position\n"); // 4, 5
    scanf("%d",&iPos);
    
    iRet = OffBit(iValue,iPos);
    
    printf("New number is : %u\n",iRet); // 1, 9
    
    return 0;
}
