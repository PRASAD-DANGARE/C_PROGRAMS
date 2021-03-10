///////////////////////////////////////////////////////////
//
// Function Name :  MinDigit()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Return Smallest Digit, Reduce Time Complexcity V3
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////

// unsigned long int is 8 byte in 64 bit 2 ^ 64

#include <stdio.h>

int MinDigit(unsigned long int iNo)
{
    int iDigit = 0, iMin = 9;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
            if(iMin == 0)
            {
                break;
            }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    unsigned long int iValue = 0;
    int Ret = 0;

    printf("Enter The Number : ");
    scanf("%lu", &iValue);
    
    Ret = MinDigit(iValue);

    printf("smallest Digit : %d ",Ret);

    return 0;
}