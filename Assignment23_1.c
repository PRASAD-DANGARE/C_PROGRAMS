////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountCapital()  
// Description   :  Write a program which accept string from user and count number of capital characters
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    
    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("Count Of Capital Letters Are : %d", iRet);

    return 0;
}