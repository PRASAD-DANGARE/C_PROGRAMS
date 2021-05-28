///////////////////////////////////////////////////////////
//
// Description   :  Accept Row, Col And Display Below Pattern
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  28 May 2021
//
///////////////////////////////////////////////////////////

/*
    iRow = 4
    iCol = 4

    * * * *
    * * * *
    * * * *
    * * * *
*/

#include <stdio.h>

void Display(int iCol)
{
    int j = 1;
    while(j <= iCol)
    {
        printf("*\t");
        j++;
    }
}

void DisplayI(int iRow, int iCol)
{   
    int i = 1;

    while(i <= iRow)
    {
        Display(iCol);
        i++;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number Of Rows : ");
    scanf("%d", &iValue1);

    printf("Enter Number Of Columns : ");
    scanf("%d", &iValue2);

    DisplayI(iValue1, iValue2);

    return 0;
}
