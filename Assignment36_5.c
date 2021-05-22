////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayR()  
// Description   :  Display a TO f On Screen Using Recursion 
// Input         :  Character
// Output        :  Character
// Author        :  Prasad Dangare
// Date          :  21 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayR()
{
    static char i = 'a';

    if(i <= 'f')
    {
        printf("%c\t", i);
        i++;
        DisplayR();
    }
    
    /*char i = 'a';
    for(i = 'a'; i <= 'f'; i++)
    {
        printf("%c\t", i);
    }*/
}

int main()
{
    DisplayR();
    return 0;
}
