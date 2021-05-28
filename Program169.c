///////////////////////////////////////////////////////////
//
// Description   :  Accept Number And Check Whether It Is Perfect Or Not Using Recursion 
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  28 May 2021
//
///////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfectR(int iNo)
{
    static int iCnt = 1, iSum = 0;

    if(iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfectR(iNo);
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    /*int iCnt = 1, iSum = 0;

    while(iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }*/
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    bRet = CheckPerfectR(iValue);

    if(bRet == true)
    {
        printf("Its A Perfect Number \n");
    }
    else
    {
        printf("It Is Not A Perfect Number \n");
    }


}