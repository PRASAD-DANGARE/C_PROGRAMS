////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description   :  Display 5 To 1 On Reverse Order
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  24 Feb 2021
//
////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

int Display()
{

    int i = 0; // Initilize To 0

    for(i = 5; i >= 1; i--) // For Loop To Print In Reverse Order
    {
        printf("%d\n", i); // Display The Value
    }
}

int main() // Entry Point Function

{
    Display(); // Function Call
    return 0;
}