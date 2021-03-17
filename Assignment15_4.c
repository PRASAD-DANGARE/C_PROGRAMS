////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()  
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  16 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    printf("\n");
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (j == 1) || (i == iCol) || (j == iRow)) 
            {
                printf("*\t");
            }
            else if (i == j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}