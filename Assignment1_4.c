////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Check()
// Description   :  Accept Number From User And Find Whether It Is Divisible By 5 Or Not
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  24 Feb 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL; // Provide Alternative Names For The primitive And User-Defined​ Data Types
                  // This Keyword Adds New Name For Existing Data Type But Does Not Create New D-Type

#define TRUE 1 // Boolean Type With New Name Bool With Value
#define FALSE -1

int Check(int iNo)
{
    if(( iNo % 5) == 0) //  Condition
    {
        return TRUE;
    }

    else
    {
        return FALSE ;
    }
}

int main()
{
    int iValue = 0; // Initilize To 0
    BOOL bRet = FALSE; // Boolean Type -1
    
    printf("Enter number : ");
    scanf("%d", &iValue);
    
    bRet = Check(iValue); // Function Call
    
    if(bRet == TRUE) // Boolean Type 1
    {
        printf("Divisible by 5 ");
    }

    else
    {
        printf("Not Divisible by 5 ");
    }
    
    return 0; 
}