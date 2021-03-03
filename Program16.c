///////////////////////////////////////////////////////////
//
// Function Name :  FactorsSum()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Find the Factors And Perform Addition Of That Number
//               :  Reduce Time complexcity By O(N/2)
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int FactorsSum(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt; 
        } 
    }
    return iSum;
}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &ivalue);

    iRet = FactorsSum(ivalue);
    printf("Summation is %d", iRet);
    return 0;
}