////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept Number From User & Display Triangle With *, # V2
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  15 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, no = 0;
    no = iCol + 1;

    if(iRow != iCol)
    {
        return;
    }

    printf("\n");
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i + j <= no)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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