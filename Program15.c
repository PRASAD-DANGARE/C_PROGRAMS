///////////////////////////////////////////////////////////
//
// Function Name :  Factors()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Find the Factors Of That Number.
//               :  Reduce The Time Complexcity By O(N/2) 
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

    for(iCnt = 1; iCnt <= iNo/2; iCnt++) // Time Complexcity Is Reduce By O(N/2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        } 
    }
}

// Time Complexity : O(N/2) reduce upto half N is Natural Number & O is Order By 2

int main()
{
    int ivalue = 0;

    printf("enter number ");
    scanf("%d", &ivalue);
    Factors(ivalue);
    return 0;
}