////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayDigit()
// Description   :  Accept Number From User And Display Its Digits In Reverse Order
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d ",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);    
    
    DisplayDigit(iValue);
    
    return 0;
}