///////////////////////////////////////////////////////////
//
// Function Name :  CountSpace()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Count The White Spaces
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////



#include <stdio.h>

int CountSpace(char str[])
{
    int iCnt = 0;
    
    if(str == NULL)
    {
        return 0;
    }

    while (*str != '\0')
    {
        if(*str == ' ') 
        {
            iCnt++;
        }    
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string : ");
    scanf("%[^'\n']s", Arr);

    iRet = CountSpace(Arr);
    printf("Count The White Space : %d\n", iRet);

    return 0;
}