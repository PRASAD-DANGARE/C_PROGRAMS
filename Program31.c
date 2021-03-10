///////////////////////////////////////////////////////////
//
// Function Name :  MinDigit()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Return Smallest Digit
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0, iMax = 9;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMax)
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
    
    Ret = MinDigit(iValue);

    printf("smallest Digit : %d ",Ret);

    return 0;
}