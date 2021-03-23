///////////////////////////////////////////////////////////
//
// Function Name :  CountA()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Count The Number Of Letters a , A
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int CountA(char str[])
{
    int i = 0;
    
    if(str == NULL)
    {
        return 0;
    }

    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'A'))
        {
            i++;
        }    
        str++;
    }
    return i;
    
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter your name : ");
    scanf("%[^'\n']s", Arr);

    iRet = CountA(Arr);
    printf("Count Of A/a is : %d\n", iRet);

    return 0;
}