///////////////////////////////////////////////////////////
//
// Function Name :  Display()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Display The String In Single Line Without Pointer
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include<stdio.h>

void Display(char str[]) // str is pointer we can use * str[] for array 
{
    int iCnt = 0;
    printf("Charcters from string are\n");
    
    while(str[iCnt] != '\0')
    {
        printf("%c\n",str[iCnt]); // display in single character
        iCnt++;
    }
}

int main()
{
    char Arr[10]; // static array
    
    printf("Enter your name : ");
    fgets(Arr,10,stdin);        // Hello
  
    Display(Arr);   // Display(100)
    
    return 0;
}