///////////////////////////////////////////////////////////
//
// Function Name :  CheckPrime()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Digit From User And Display The Digits Of That Number Separately In Reverse Order
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d ", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);
    
    DisplayDigits(iValue);

    return 0;
}