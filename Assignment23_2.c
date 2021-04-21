////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountSmall()  
// Description   :  Write a program which accept string from user and count number of Small characters
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    
    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("Count Of Small Letters Are : %d", iRet);

    return 0;
}