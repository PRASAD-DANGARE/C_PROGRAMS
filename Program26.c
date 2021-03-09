///////////////////////////////////////////////////////////
//
// Function Name :  Reverse()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Return  Reverse Of That Number Except 0 In First Position
// Author        :  Prasad Dangare
// Date          :  09 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int Revere(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = Revere(iValue);
    printf("Reverse Of Number is : %d", iRet);

    return 0;
}