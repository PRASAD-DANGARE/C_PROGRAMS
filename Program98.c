///////////////////////////////////////////////////////////
//
// Function Name :  strcpyXX()
// Description   :  Accept One String From User And Convert It Into Capital Letters In Another String V2
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////



// HellO
// HELLO

#include<stdio.h>

void strcpyXX(const char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src -32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyXX(arr,brr);   // strcpyX(100,200)
    printf("Original string is : %s\n",arr);
    printf("After copy strinng is : %s\n",brr);
    
    return 0;
}