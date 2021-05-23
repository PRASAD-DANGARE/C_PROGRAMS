////////////////////////////////////////////////////////////////////////////
//
// Function Name :  WhiteSpace()  
// Description   :  Accept String From User And Count White Spaces Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int WhiteSpace(char *str)
{
    static int i = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            i++;
        }
        str++;
        WhiteSpace(str);
    }
    return i;
    
    /*int i = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            i++;
        }
        str++;
    }
    return i;*/
}

int main()
{
    char iValue [30];
    int iRet = 0;

    printf("Enter The String : ");
    scanf("%[^'\n']s", iValue);

    iRet = WhiteSpace(iValue);

    printf("White Spaces Are : %d", iRet);

    return 0;
}