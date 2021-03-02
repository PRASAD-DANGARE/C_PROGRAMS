////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PrintEven()
// Description   :  Accept Number From User And Display That Number Of Time Even Numbers
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= 2 * iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    PrintEven(iValue);
    
    return 0;
}