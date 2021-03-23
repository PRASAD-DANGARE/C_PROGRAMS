///////////////////////////////////////////////////////////
//
// Function Name :  Display()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Display The String In Single Line Without Pointer Using Forloop
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Display(char str[]) // str is pointer we can use * str[] for array 
{
    int iCnt = 0;
    printf("Characters form string are : \n");

    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        printf("%c\n", str[iCnt]);
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