///////////////////////////////////////////////////////////
//
// Function Name :  CheckPallindrone()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Check Whether That Number Is Pallindrone Or Not 
// Author        :  Prasad Dangare
// Date          :  09 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0, iTemp = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }
    iTemp = iNo;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iRev == iTemp)
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
    bool bRet;

    printf("Enter The Number : ");
    scanf("%d", &iValue);
    
    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("It is pallindrome");
    }
    else
    {
        printf("It is not pallindrome");
    }

    return 0;
}