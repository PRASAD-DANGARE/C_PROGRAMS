///////////////////////////////////////////////////////////
//
// Function Name :  Factors()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Find the Factors Of That Number.
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        } 
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number ");
    scanf("%d", &ivalue);
    
    Factors(ivalue);
    return 0;
}