////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Accept Character From User & Display That Character In Capital Letters On Screen Using Recursion 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  21 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayR(int iNo)
{
    static int i = 1;
    static char ch = 'A';

    if((i <= iNo) || (ch <= iNo))
    {
       printf("%c\t", ch);
       i++, ch++;
       DisplayR(iNo);
    }

   /*int i = 0;
   char ch = '\0';

    for(i = 1, ch = 'A'; i <= iNo; i++, ch++)
    {
        printf("%c\t", ch);
    }*/
}

int main()
{
    int iValue = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}