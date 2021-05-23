////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Fact()  
// Description   :  Accept Number From User And Return Its Factorial Using Recursion
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Fact(int iNo)
{
    static int i = 1, iMult = 1;

    if(i <= iNo)
    {
        iMult = iMult * i;
        i++;
       Fact(iNo); 
    }
    return iMult;
    
    /*int i = 0, iMult = 1;

    for(i = 1; i <= iNo; i++)
    {
        iMult = iMult * i;
    }
    return iMult;*/
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}