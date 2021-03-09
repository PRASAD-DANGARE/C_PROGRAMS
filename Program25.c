///////////////////////////////////////////////////////////
//
// Function Name :  MultDigit()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Multiplication All The Numbers Except 0
// Author        :  Prasad Dangare
// Date          :  09 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0, iMult = 1;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0) // if(iDigit != 1) also use 1
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = MultDigit(iValue);
    printf("Multiplication Of Digits : %d", iRet);

    return 0;
}