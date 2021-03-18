///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Row & Column And Display Triangle
// Author        :  Prasad Dangare
// Date          :  16 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    char Ch = '\0';

    if(iRow != iCol)
    {
        return;
    }

    printf("\n");
    for(i = 1, Ch = 'A'; i <= iRow; i++, Ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i >= j)
            {
                printf("%c\t", Ch);
            }
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