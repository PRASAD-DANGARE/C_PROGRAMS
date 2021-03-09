///////////////////////////////////////////////////////////
//
// Function Name :  MaxDigit()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Return Largest Number
// Author        :  Prasad Dangare
// Date          :  09 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0, iMax = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int Ret = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);
    
    Ret = MaxDigit(iValue);

    printf("Largest Digit : %d ",Ret);

    return 0;
}