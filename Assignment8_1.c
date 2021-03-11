////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Description   :  Accept Number From User & Display That Number Of Times $,* On Screen
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  11 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;

}