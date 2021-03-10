///////////////////////////////////////////////////////////
//
// Function Name :  MinDigit()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Return Smallest Digit, Reduce Time Complexcity V2
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int MinDigit(int iNo)
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
    int iValue = 0;
    int Ret = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);
    
    Ret = MinDigit(iValue);

    printf("Smallest Digit : %d ",Ret);

    return 0;
}