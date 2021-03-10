///////////////////////////////////////////////////////////
//
// Function Name :  Frequency()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Find Frequency Of Given Digit By User
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int Frequency(int iNo, int i)
{
    int iCnt =0,iDigit = 0;

    if(i > 9)
    {return 0;}
    
    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == i)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue1);
    
    printf("Enter the digit : ");
    scanf("%d",&iValue2);
    
    iRet = Frequency(iValue1, iValue2);
    
    printf("Frequency is : %d\n",iRet);
    return 0;
}