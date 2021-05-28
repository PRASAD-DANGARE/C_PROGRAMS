///////////////////////////////////////////////////////////
//
// Description   :  Accept N Number And Perform addition Of All Digits Using Recursion 
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  28 May 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int SumR(int Arr[], int iSize)
{
    static int iSum = 0;
    static int iCnt = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        SumR(Arr, iSize);
    }
    return iSum;

    /*int iSum = 0, iCnt = 0;

    while(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
    }
    return iSum;*/
}

int main()
{
    int *p = NULL;
    int iRet = 0, iValue = 0, iCnt = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d", &iValue);

    p = (int*)malloc(sizeof(int) * iValue);

    printf("Enter The Elements : \n");

    while(iCnt < iValue)
    {
        scanf("%d", &p[iCnt]);
        iCnt++;
    }

    iRet = SumR(p, iValue);
    printf("Addition is : %d", iRet);
    free(p);

    return 0;
}