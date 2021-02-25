////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Accept()
// Description   :  Accept HardCoded Number And Print That Number of * On Screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Feb 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return 0;
}