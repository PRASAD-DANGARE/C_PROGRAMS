////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MultFact()
// Description   :  Accept Number From User And Display Multiplication Factors Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  03 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
            printf("%d ", iCnt);
        }
    }
    printf("\nMultiplication Of Factors Is %d", iMult);
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);
    
    MultFact(iValue);

    return 0;
}