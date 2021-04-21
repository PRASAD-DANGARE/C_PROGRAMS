////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()  
// Description   :  Accept character from user and display its ASCII value in decimal, octal, hexadecimal format
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display (char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf(" Decimal Value is : %d\n", ch);
        printf(" Octal Value is : %o\n", ch);
        printf(" Hexadecimal Value is : %x\n", ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}