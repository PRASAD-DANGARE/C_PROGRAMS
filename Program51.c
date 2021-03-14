///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Row & Column And Display * Using Non Linear Pattern Printing 
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
///////////////////////////////////////////////////////////


// Non Linear Pattern Printing 

#include <stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;

    printf("\n");
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    char cValue = '\0';

    printf("Enter Number Of Rows : ");
    scanf("%u", &iValue1);

    printf("Enter Number Of Columns : ");
    scanf("%u", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}