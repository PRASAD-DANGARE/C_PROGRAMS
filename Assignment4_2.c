////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactRec()
// Description   :  Accept Number From User And Display Factors In Descending Order
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  03 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0, iRet = 0;

    for(iCnt = iNo - 1; iCnt >= 1; iCnt--)

    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);
    
    FactRev(iValue);
    
    return 0;
}