///////////////////////////////////////////////////////////
//
// Function Name :  strcatX()
// Description   :  Accept 2 String From User And Concat 1 String Behind 2 String 
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
    while(*dest != '\0') // travel till last
    {
        dest++; // Hello
    }
    while(*src!= '\0') // travel till last
    {
        *dest = *src; // HelloDemo
        src++; // go till \0 aak ghar pudhe
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter first string\n");
    scanf("%[^'\n']s",arr);   //     Demo
    printf("Enter second string\n");    // Hello
    scanf(" %[^'\n']s",brr); // give space otherwise it dont stop for next string
    strcatX(arr,brr);
    printf("After concat strinng is : %s\n",brr); // HelloDemo its like append
    
    return 0;
}