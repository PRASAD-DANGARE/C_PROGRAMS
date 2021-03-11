////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OddDisplay()
// Description   :  Accepts N From User And Print All Odd Numbers Up To N
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void OddDisplay(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= 2 * iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
