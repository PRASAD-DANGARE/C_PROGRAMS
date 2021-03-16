////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Display Number From User & Display Characters On Screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  15 Mar 2021
//
////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    printf("\n");
    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
        {
            printf("%c\t", ch);
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