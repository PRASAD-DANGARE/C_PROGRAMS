///////////////////////////////////////////////////////////
//
// Function Name :  Display()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Display The String In Single Line
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Display(char str[]) // str is pointer we can use * str[] for array 
{
    printf("Characters form string are : \n");

    while (*str != '\0')
    {
        printf("%c\n", *str); // display in single character
        str++;
    }
    
}

int main()
{
    char Arr[10]; // static array

    printf("Enter Your Name : ");

    fgets(Arr, 40, stdin); // Hello

    Display(Arr);

    return 0;
}