///////////////////////////////////////////////////////////
//
// Function Name :  Display_Table()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Display Tables Of That Number 
// Author        :  Prasad Dangare
// Date          :  01 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

void Display_Table(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iNo * iCnt);
    }
}

int main()
{
    int ivalue = 0;
    printf("Enter Number : ");
    scanf("%d", &ivalue);

    Display_Table(ivalue);

    return 0;
}