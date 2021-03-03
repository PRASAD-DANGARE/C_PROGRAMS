///////////////////////////////////////////////////////////
//
// Function Name :  Fact()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Find the Factorial Using Whileloop
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int Fact(int iNo)
{
    int iMult = 1;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while(iNo > 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }
    return iMult;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &ivalue);
    
    iRet = Fact(ivalue);
    
    printf("Result Is %d", iRet);
    
    return 0;
}