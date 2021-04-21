////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference()  
// Description   :  accept string from user and return frequency of small characters and capital characters
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Difference(char *str)
{
    int iCnt = 0, iCnt2 = 0;
    
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
        else if(*str >= 'a' && *str <= 'z')
        {
            iCnt2++;
        }
        str++;
    }    

    return iCnt2 - iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf(" Difference is : %d", iRet);

    return 0;
}