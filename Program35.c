///////////////////////////////////////////////////////////
//
// Function Name :  Difference()
// Input         :  Integer
// Output        :  Integer
// Description   :  Find Factors & Non Factors And Subtract Both Factors And Non Factors
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int Difference(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Difference(iValue);

    printf("Difference is %d ", iRet);

    return 0;
}