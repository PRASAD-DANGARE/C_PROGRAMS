////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrlenX()  
// Description   :  Accept String From User And Count Number Of Characters Using Recursion
// Input         :  Int,Char
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int StrlenX(char *str)
{

    static int i = 0;

    if(*str != '\0')
    {
        i++;
        str++;
        StrlenX(str);
    }
    return i;

    /*int i = 0;

    while(*str != '\0')
    {
        i++;
        str++;
    }
    return i;*/
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter The String ");
    scanf("%s", Arr);

    iRet = StrlenX(Arr);

    printf("%d", iRet);

    return 0;
}