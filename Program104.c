///////////////////////////////////////////////////////////
//
// Function Name :  CountOne()
// Description   :  Accept Number From User And Display The Count Of ON Bits 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountOne(unsigned int iNo)
{
    unsigned int iDigit = 0;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        printf("%u\t",iDigit);
        if(iDigit == 1) // check how many bits are on 1
        {
            iCnt++;
        }
        iNo = iNo / 2;
    }
    return iCnt;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountOne(iValue);
    
    printf("\nNumber of on bits are : %d\n",iRet);
    return 0;
}
