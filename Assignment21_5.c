////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplaySchedule()  
// Description   :  Accept The Division & Display The Exam Time
// Input         :  Integer, String
// Output        :  Integer, String
// Author        :  Prasad Dangare
// Date          :  23 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplaySchedule(char ClassDiv)
{

    if(((ClassDiv == 'A') && (ClassDiv < 'B')) || ((ClassDiv == 'a') && (ClassDiv < 'b')))
    {
        printf("Your Exam At 7 Am ", ClassDiv);
    }

    else if(((ClassDiv == 'B') && (ClassDiv < 'C')) || ((ClassDiv == 'b') && (ClassDiv < 'c')))
    {
        printf("Your Exam At 8.30 Am ", ClassDiv);
    }

    else if(((ClassDiv == 'C') && (ClassDiv < 'D')) || ((ClassDiv == 'c') && (ClassDiv < 'd')))
    {
        printf("Your Exam At 9.20 Am ", ClassDiv);
    }

    else if(((ClassDiv == 'D') && (ClassDiv < 'E')) || ((ClassDiv == 'd') && (ClassDiv < 'e')))
    {
        printf("Your Exam At 10.30 Am ", ClassDiv);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision : ");
    scanf("%c", &cValue);
    
    DisplaySchedule(cValue);
    
    return 0;
}