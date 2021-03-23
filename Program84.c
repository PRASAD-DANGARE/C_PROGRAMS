///////////////////////////////////////////////////////////
//
// Function Name :  CountCap()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Count The Capital Letters
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int CountCap(char str[])
{
    int iCnt = 0;
    
    if(str == NULL)
    {
        return 0;
    }

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCap(Arr);
    printf("Frequency of capital letters is : %d\n", iRet);

    return 0;
}