///////////////////////////////////////////////////////////
//
// Function Name :  Check_Divisible()
// Input         :  Integer,Integer
// Output        :  Boolean
// Description   :  Accept Number From User & check Whether Number 1 is divisible by Number 2
// Author        :  Prasad Dangare
// Date          :  01 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

bool Check_Divisible(int iNo1, int iNo2)
{
    
    if((iNo1 % iNo2) == 0)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet;

    printf("Enter first Number ");
    scanf("%d", &iValue1);

    printf("Enter second Number ");
    scanf("%d", &iValue2);

    bRet = Check_Divisible(iValue1, iValue2); // Function Call
    if(bRet == true)
    {
        printf("%d is divisible by %d\n", iValue1, iValue2);
    }
    else
    {
        printf("%d is not divisible by %d\n", iValue1, iValue2);
    }

    return 0;
}