///////////////////////////////////////////////////////////
//
// Description   :  Accept Number And Count On Bits Using Recursion 
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  28 May 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int CountOnR(int iNo)
{
    static int iMask = 1, i = 0, iCnt = 0;

    if(i < 32)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        i++;
        iMask = iMask << 1;
        CountOneR(iNo);
    }
    return iCnt;
    
    /*int iMask = 1;
    int i =  1, iCnt = 0;

    while(i <= 32)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        i++;
        iMask = iMask << 1;
    }
    return iCnt;*/
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = CountOnR(iValue);

    printf("Number Of 1's Are : %d", iRet);
}

