///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Row & Column And Display Numbers & *
// Author        :  Prasad Dangare
// Date          :  15 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i, j;

    printf("\n");
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            printf("*\t");
            else
            printf("%d\t", j);
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