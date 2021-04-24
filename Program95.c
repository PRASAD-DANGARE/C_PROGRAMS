///////////////////////////////////////////////////////////
//
// Function Name :  strcpyX()
// Description   :  Accept String From User And Copy The Content Of One String Into Another String
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyX(char src[], char dest[]) // pointer src is the sorce of notwbook. destination is the new notebook
{
    if(src == NULL || dest == NULL) // jar NULL asel tar return
    {
        return;
    }
    while(*src != '\0') // travel till \0 (pointer)
    {
        *dest = *src; // copy the content of one notebook to new notebook
        src++; // pude chal 
        dest++;
    }
    *dest = '\0'; // new notebook che last madhe \0 for copy is done
}
int main()
{
    char arr[20]; // create array for input
    char brr[20]; // create array for new notebook
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyX(arr,brr);   // strcpyX(100,200)
        
    printf("After copy string is : %s\n",brr); // display the contents of src to dest
    
    return 0;
}