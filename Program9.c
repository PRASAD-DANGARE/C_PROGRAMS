///////////////////////////////////////////////////////////
//
// Function Name :  Check_Result()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Marks From User & Check Whether Marks Is In Which Class(Fail,Pass,Second,First Class, Distinction) 
// Author        :  Prasad Dangare
// Date          :  01 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Check_Result(int iMarks)
{
    if((iMarks < 0) || (iMarks > 100)) // input filter
    {
        printf("Invalid Marks\n");
        return;
    }
    if((iMarks >= 0) && (iMarks < 35))
    {
        printf("You are failed..\n");
    }
    else if((iMarks >= 35) && (iMarks < 50))
    {
        printf("Pass Class..\n");
    }
    else if((iMarks >= 50) && (iMarks < 60))
    {
        printf("Second Class..\n");
    }
    else if((iMarks >= 60) && (iMarks < 70))
    {
        printf("First Class\n");
    }
    else
    {
        printf("Distinction\n");
    }
}

int main()
{
    int ivalue = 0;
    printf("Enter Your Marks\n");
    scanf("%d", &ivalue);

    Check_Result(ivalue);

    return 0;
}