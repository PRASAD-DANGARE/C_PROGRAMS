///////////////////////////////////////////////////////////
//
// Function Name :  strcatX()
// Description   :  Accept 2 String From User And Concat 1 String Behind 2 String V2
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void strcatX(const char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*dest != '\0')
    {
        dest++; // continue kar notebook madhe
    }
    *dest = ' '; // here we add space explicitly
    dest++; // copy till space
    while(*src!= '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[50];
    char brr[50];
    
    printf("Enter first string\n");
    scanf("%[^'\n']s",arr);   //     Demo
    printf("Enter second string\n");    // Hello
    scanf(" %[^'\n']s",brr);
    strcatX(arr,brr);
    printf("After concat strinng is : %s\n",brr); // Hello Demo
     
    return 0;
}