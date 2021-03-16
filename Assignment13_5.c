////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept Number From User & Display * in Triangle  
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

    if(iRow != iCol)
    {
        return;
    }

    printf("\n");
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (j == 1) || (i == iCol) || (j == iRow)) 
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
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