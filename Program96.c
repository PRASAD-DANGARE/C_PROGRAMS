///////////////////////////////////////////////////////////
//
// Function Name :  strcpyrevX()
// Description   :  Accept String From User And Reverse The Content Of One String Into Another String
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyrevX(char src[], char dest[])
{
    int iCnt = 0;
    if(src == NULL || dest == NULL)
    {
        return;
    }                                           // iCnt = 0
    
    while(*src != '\0')                   //  a   b   c   d   \0
    {
        src++;  // a, b, c, d
        iCnt++; // 1, 2, 3, 4                         
    }
    src--; // stop before \0 d
    while(iCnt > 0)  //   icnt = 4           d   c   b   a   \0
    {
        *dest = *src; // d, c, b, a
        src--; // d, c, b, a
        dest++; // 1, 2, 3, 4
        iCnt--; // 4, 3, 2, 1
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyrevX(arr,brr);   // strcpyX(100,200)
        
    printf("After copy strinng is : %s\n",brr);
    
    return 0;
}