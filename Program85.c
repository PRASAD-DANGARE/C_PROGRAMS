///////////////////////////////////////////////////////////
//
// Function Name :  CountSmall()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Count The Capital Letters
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int CountSmall(char str[])
{
    int iCnt = 0;
    
    if(str == NULL)
    {
        return 0;
    }

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);
    printf("Frequency of small letters is : %d\n", iRet);

    return 0;
}