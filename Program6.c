///////////////////////////////////////////////////////////
//
// Function Name :  CheckEven()
// Input         :  Integer
// Output        :  Boolean
// Description   :  Accept Number From User & Find Whether Given Number is Even or Odd
// Author        :  Prasad Dangare
// Date          :  01 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
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

    bRet = CheckEven(iValue); // function call
    if(bRet == true)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }

    return 0;
}