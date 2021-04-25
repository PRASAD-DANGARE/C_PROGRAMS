///////////////////////////////////////////////////////////
//
// Function Name :  strcpyX()
// Description   :  Accept String From User And Ask How Many Numbers To Copy 
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void strncpyX(const char src[], char dest[], int value)
{
        if((src == NULL) || (dest == NULL) || (value <= 0))
        {
            return;
        }
        
        while((value>0) && (*src != '\0')) // if we give no as 25 and string is Marvellous so it will handle it 
        {
            *dest = *src;
            dest++;
            src++;
            value--;
        }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];
    int iNo = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter number of elements to copy\n");
    scanf(" %d",&iNo);
    
    strncpyX(arr,brr,iNo);
    
    printf("String after copy is : %s\n",brr);
    return 0;
}

