///////////////////////////////////////////////////////////
//
// Description   :  Accept Number And Display Its Factors Using Recursion 
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  28 May 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayFactorsR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
        iCnt++;
        DisplayFactorsR(iNo);
    }
    /*int iCnt = 1;

    while(iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
        iCnt++;
    }*/
    
}

int main()
{
    int iValue = 0;

    printf("Enter The Number : ");
    scanf("%d", &iValue);

    DisplayFactorsR(iValue);

    return 0;
}