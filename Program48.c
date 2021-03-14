///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number & Display Character That Number Of Times Using Linear Pattern Printing
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(unsigned int iNo, char ch)
{
    int iCnt = 0;

    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch);
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';

    printf("Enter Number : ");
    scanf("%u", &iValue);

    printf("Enter Character : ");
    scanf(" %c", &cValue);

    Pattern(iValue, cValue);
    return 0;
}