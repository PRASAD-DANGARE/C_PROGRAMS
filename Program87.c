///////////////////////////////////////////////////////////
//
// Function Name :  strlwrX()
// Description   :  Accept String From User And Convert Upper Case Letter Into Lower Case Letter
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void strlwrX(char str[])
{
    if(str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32; // convert to lower
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

    strlwrX(Arr);
    printf("Updated string is : %s\n", Arr);

    return 0;
}