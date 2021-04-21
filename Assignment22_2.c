////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()  
// Description   :  Accept Character & Convert Into Upper Case To Lower Case, Vice Varsa
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
    }
    printf("Updated String is : %c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}