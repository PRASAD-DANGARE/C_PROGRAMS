///////////////////////////////////////////////////////////
//
// Function Name :  Power()
// Input         :  Integer, Integer
// Output        :  Integer
// Description   :  Accept Number From User & Calculate its power 
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>

int Power(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iMult = 1; // because if We Dont Write 1 or get 0 It Dont Iterate

    if(iNo1 < 0)
    {
        iNo1 =- iNo1;
    }

    if(iNo2 < 0)
    {
        iNo2 =- iNo2;
    }

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    
    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    int iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue1);

    printf("Enter Power For That Number : ");
    scanf("%d", &iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Result Is : %d", iRet);

    return 0;
}