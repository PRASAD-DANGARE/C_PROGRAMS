////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept Number From User & Display Char In A, a On Screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  15 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    char Ch = 'A';

    printf("\n");
    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            char ch2 = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf(" %c\t", ch2);
                ch2++;
            }
            printf("\n");
        }
        else
        {
            char Ch = 'A';
            for(j = 1; j <= iCol; j++)
            {
                printf(" %c\t", Ch);
                Ch++;
            }
            printf("\n");
        }
        
        printf("\n");
    }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows : ");
    scanf("%u", &iValue1);

    printf("Enter Number of cols : ");
    scanf("%u", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}