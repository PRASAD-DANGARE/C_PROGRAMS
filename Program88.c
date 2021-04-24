///////////////////////////////////////////////////////////
//
// Function Name :  struprX()
// Description   :  Accept String From User And Convert lower case to upper case letters
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void struprX(char str[])
{
    if(str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32; // convert to capital
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

    struprX(Arr);
    printf("Updated string is : %s\n", Arr);

    return 0;
}