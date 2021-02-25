//////////////////////////////////////////////////////////////
//
// Function Name :  Sum()
// Description   :  Accept Number From User, Display That Number And Perform Addition Of That Number 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Feb 2021
//
//////////////////////////////////////////////////////////////


#include <stdio.h>

int Sum(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo == 0)
    {
        return 0;
    }
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" %d", iCnt);
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter The Number : ");
    scanf("%d", &iNo);

    iRet = Sum(iNo);
    printf("\n Addition Is : %d\n", iRet);

    return 0;
}