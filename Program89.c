///////////////////////////////////////////////////////////
//
// Function Name :  strToggel()
// Description   :  Accept String From User And toggle uppercase letter to lowercase letter
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void strToggel(char str[])
{
    if(str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter String : ");
    scanf("%[^'\n]s", Arr);

    strToggel(Arr);
    printf("Updated string is : %s\n", Arr);

    return 0;
}