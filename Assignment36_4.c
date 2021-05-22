////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Display A TO F On Screen Using Recursion 
// Input         :  Character
// Output        :  Character
// Author        :  Prasad Dangare
// Date          :  21 May 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayR()
{
    static char i = 'A';

    if(i <= 'F')
    {
        printf("%c\t", i);
        i++;
        DisplayR();
    }

    /*char i = 'A';

    for(i = 'A'; i <= 'F'; i++)
    {
        printf("%c\t", i);
    }*/

}

int main()
{
    DisplayR();
    return 0;
}