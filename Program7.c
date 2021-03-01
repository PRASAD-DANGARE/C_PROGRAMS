///////////////////////////////////////////////////////////
//
// Function Name :  Check_Divisible()
// Input         :  Integer
// Output        :  Boolean
// Description   :  Accept Number From User & check Whether Number is divisible by 3 and 5
// Author        :  Prasad Dangare
// Date          :  01 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

bool Check_Divisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number ");
    scanf("%d", &iValue);

    bRet = Check_Divisible(iValue); // Function Call
    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 3 and 5\n", iValue);
    }

    return 0;
}