///////////////////////////////////////////////////////////
//
// Function Name :  Frequency()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Find Frequency Of 2 Which is Hardcoded V2
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int Frequency(int iNo)
{
    int iCnt = 0,iDigit = 0;

    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue1);
    
    iRet = Frequency(iValue1);
    
    printf("Frequency of 2 is : %d",iRet);
    return 0;
}