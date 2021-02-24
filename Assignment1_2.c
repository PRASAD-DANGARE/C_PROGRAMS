////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description   :  Display 5 Times Message On Console
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  24 Feb 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h> // Header File
 
void Display() 
{
    int i = 0; // Initilize To 0
    for(i = 1; i <= 5; i++) // For-Loop
    {
        printf("Marvellous\n"); // Message
    }
}

int main() // Entry Point Function
{
    Display(); // Function Call

    return 0; // Success
}