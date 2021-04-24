///////////////////////////////////////////////////////////
//
// Function Name :  Reverse()
// Description   :  Accept String From User And Convert The String Into Reverse Order
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Reverse(char str[])
{
    char *start, *end;
    char Temp;

    if(str == NULL)
    {
        return;
    }

    start = str;
    end = str;
    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;
        start++;
        end--;
    }
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n]s", Arr);

    Reverse(Arr);
    printf("Reverse String is : %s\n", Arr);

    return 0;
}