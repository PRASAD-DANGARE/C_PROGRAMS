////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Star_Printing()
// Description   :  Accept Number From User And Display That Number In * On Console
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  24 Feb 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Star_Printing(int iNo)
{
    int iCnt = 0;
    for( iCnt = 1; iCnt <= iNo; iCnt++) // For-Loop To Print Till The Given Number
    {
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter The Number : ");
    scanf("%d", &iValue);

    Star_Printing(iValue); // Function Call

    return 0;
}