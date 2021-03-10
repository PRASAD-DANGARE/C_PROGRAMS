///////////////////////////////////////////////////////////
//
// Function Name :  NumberLine()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Display Number Line From Negative To Positive
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void NumberLine(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("\n");
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue1);
    
    NumberLine(iValue1);
    
    return 0;
}