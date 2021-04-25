///////////////////////////////////////////////////////////
//
// Function Name :  CountBit()
// Description   :  Accept Number From User, & Count How Many Bits Are ON, Return The Count Of On Bits  
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int CountBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000001, iResult = 0; //   1       0       1       0       0       1       0       1
    int iCnt = 0, i = 0; 

    for(i = 0; i < 32; i++)
    {
        iResult = iNo & iMask; // accept number and count how many bits are on, return the count of on bits

        if(iResult == iMask) // iMask = 1, iResult = 1 , then iCnt++
        {
            iCnt++;
        }
        iMask = iMask << 1; // aak ghar pudhe
    }
    return iCnt;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountBit(iValue);
    printf("Total ON bits are : %d\n",iRet);
    
    return 0;
}