///////////////////////////////////////////////////////////
//
// Function Name :  CountOne()
// Description   :  Accept Number From User And Display The Count Of ON Bits V2
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountOne(unsigned int iNo)
{
    int iCnt = 0;
    while(iNo > 0)
    {
        iCnt = iCnt + (iNo % 2); // printf("%u\t",iDigit); it display 43 21 10 5 2 1
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
    
    printf("Number of on bits are : %d\n",iRet);
    return 0;
}
