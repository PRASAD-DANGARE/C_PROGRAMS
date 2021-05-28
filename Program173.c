///////////////////////////////////////////////////////////
//
// Description   :  Accept Row, Col And Display Below Pattern Using Recursion
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  28 May 2021
//
///////////////////////////////////////////////////////////

/*
    iRow = 3
    iCol = 4

    * * * *
    * * * *
    * * * *
*/

#include <stdio.h>

void Display(int iCol) // Display / Travel columns = 4
{
    static int j = 1;
    if(j <= iCol) // 1 <= 4, 2 <= 4, 3 <= 4, 4 <= 4 stop 
    {
        printf("*\t"); 
        j++;         // Display Columns   1   2    3       4
        Display(iCol); // Recursive Call, *, * *, * * *, * * * *
    }
    j = 1; // after 4 again reset to 1
}

void DisplayR(int iRow, int iCol) // Display / Travel Rows = 3
{   
    static int i = 1;

    if(i <= iRow) // 1 <= 4, 2 <= 4, 3 <= 3, 4 <= 3,false
    {
        Display(iCol); // Call to Travel Columns
        i++;
        printf("\n"); 
        DisplayR(iRow, iCol); // Recursive Calls
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number Of Rows : "); // 4
    scanf("%d", &iValue1);

    printf("Enter Number Of Columns : "); // 4
    scanf("%d", &iValue2);

    DisplayR(iValue1, iValue2);

    return 0;
}
