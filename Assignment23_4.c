////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowel()  
// Description   :  accept string from user and check whether it contains vowels in it or not
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int iCnt = 0;
    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
		    *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
            str++;
        }
    }
    return iCnt;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string : ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}