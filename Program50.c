///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number & Display Character V2 Using Linear Pattern Printing
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    char Ch = '\0';

    printf("\n");
    for(iCnt = 1, Ch = 'A'; iCnt <= iNo; iCnt++, Ch++)
    {
        printf("%c\t", Ch);
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';

    printf("Enter Number : ");
    scanf("%u", &iValue);

    Pattern(iValue);

    return 0;
}