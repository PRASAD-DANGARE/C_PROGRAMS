///////////////////////////////////////////////////////////
//
// Function Name :  Fact()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Find the Factorial using forloop
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int Fact(int iNo)
{
    int iCnt = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;
    }
    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);
    printf("Result is %d", iRet);

    return 0;
}