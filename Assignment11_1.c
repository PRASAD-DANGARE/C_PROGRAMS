////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Display * Rectangle Pattern On Screen 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  12 Mar 2021
//
////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow <= 0)
    {
        printf("Invalid Number ");
        return;
    }

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
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iValue1);

    printf("Enter number of cols : ");
    scanf(" %d", &iValue2);

    Pattern(iValue1, iValue2);
    
    return 0;
}