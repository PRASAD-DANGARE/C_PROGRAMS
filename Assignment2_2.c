////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description   :  Accept Number From User And Display That Number In * On Console Using While Loop
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Feb 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display(int iNo)
{
    while( iNo > 0)
    {
        printf("* ");
        iNo --;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}

/*
#include <stdio.h>

void Display(int iNo)
{
    int i = 1;
    while( iNo >= i)
    {
        printf("%d", i);
        i++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}
*/