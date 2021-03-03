///////////////////////////////////////////////////////////
//
// Function Name :  CheckPerfect()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Check Whether It Is Perfect Or Not
//               :  Reduce The Time Complexcity By O(N/2)
// Author        :  Prasad Dangare
// Date          :  02 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt; 
        } 
    }

    if(iSum == iNo)
        return true;
    else
        return false;
}

// Time Complexity : O(N/2) reduce upto half N is Natural Number & O is Order By 2

int main()
{
    int ivalue = 0;
    bool bret;

    printf("Enter Number : ");
    scanf("%d", &ivalue);

    bret = CheckPerfect(ivalue);
    
    if(bret == true)
    {
        printf("%d is Perfect Number ", ivalue);
    }
    else
    {
        printf("%d is Not Perfect Number ", ivalue);
    }
    return 0;
}