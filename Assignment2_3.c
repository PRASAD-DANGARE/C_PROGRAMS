////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description   :  Accept Number From User If Number Is Less Than-Or Equal To 10 Then Print Hello Else Print Demo
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Feb 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Display (int iNo)
{
    if(iNo <= 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d" ,&iValue);
    
    Display(iValue);
    return 0;

}