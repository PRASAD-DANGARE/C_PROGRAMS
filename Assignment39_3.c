////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Small()  
// Description   :  Accept String From User And Count Number Of Small characters Using Recursion
// Input         :  Int,Char
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Small(char *str)
{
    static int i = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            i++;
        }
        str++;
        Small(str);
    }
    return i;
    
    /*int i = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            i++;
        }
        str++;
    }
    return i;*/
}

int main()
{
    char iValue[30];
    int iRet = 0;

    printf("Enter The String : ");
    scanf("%[^'\n']s", iValue);

    iRet = Small(iValue);

    printf("Count Of Small Letters is : %d", iRet);

    return 0;
}