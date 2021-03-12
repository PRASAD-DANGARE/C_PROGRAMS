////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Display Pattern Input 5 A B C D E
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  12 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char Ch = 'A';

    if((iNo < 0) || (iNo > 26))
    {
        printf("Alphabets Only Contains 26 Letters ");
        return;
    }

    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", Ch++);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);
    
    return 0;
}