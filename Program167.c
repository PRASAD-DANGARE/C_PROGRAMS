///////////////////////////////////////////////////////////
//
// Description   :  Accept String And Count String Length Using Recursion 
// Input         :  Int,char
// Output        :  Int,char
// Author        :  Prasad Dangare
// Date          :  28 May 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int StrlenR(char str[])
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        str++;
        iCnt++;
        StrlenR(str);
    }
    return iCnt;
    /*int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;*/
}

int main()
{
    char arr[30] = {'\0'};
    int iRet = 0;

    printf("Enter The String : ");
    scanf("%[^'\n']s", arr);

    iRet = StrlenR(arr);

    printf("String Length is : %d", iRet);

    return 0;
}