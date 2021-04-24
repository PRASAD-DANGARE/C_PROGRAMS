///////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description   :  Accept String From User And Display It In Reverse Order V2
// Input         :  Integer,String
// Output        :  Integer,String
// Author        :  Prasad Dangare
// Date          :  24 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char str[])
{
    int iCnt = 0;

    if(str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }

    str--;
    for(; iCnt > 0; iCnt--, str--)
    {
        printf("%c", *str);
    }
    printf("\n");
}
// complexcity is 2N
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter String : ");
    scanf("%[^'\n]s", Arr);

    Display(Arr);
    printf("%s", Arr);

    return 0;
}