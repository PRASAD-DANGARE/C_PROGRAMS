///////////////////////////////////////////////////////////
//
// Function Name :  strlenX()  
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Display The String Length
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;
    
    while (*str != '\0')
    {
        printf("%d : %c : %d\n", iCnt, *str, *str);
        iCnt++; 
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter your name : ");
    scanf("%[^'\n']s", Arr);
    //fgets(Arr,10,stdin); input is Hello it goes to 6 so dont use it

    iRet = strlenX(Arr);
    printf("String Length is : %d\n", iRet);

    return 0;
}