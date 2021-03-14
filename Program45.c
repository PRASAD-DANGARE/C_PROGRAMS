///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Display * # On Screen Using Linear Pattern Printing
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(unsigned long int iNo)
{
    int iCnt = 0;

    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t#\t");
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;

    printf("Enter Number : ");
    scanf("%u", &iValue);

    Pattern(iValue);
    return 0;
}