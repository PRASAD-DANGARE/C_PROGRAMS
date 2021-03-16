////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept Number From User & Display Number + 1 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  15 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = 1;

    printf("\n");
    for(i = 1; iRow >= i; i++)
    {
        for(j = 1; iCol >= j; j++, k++)
        {
            printf("%d\t", k);
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