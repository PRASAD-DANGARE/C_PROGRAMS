///////////////////////////////////////////////////////////
//
// Function Name :  CheckPrime()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Digit From User And Check Whether It Is Prime Or Not
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            break;
        } 
    }
    if(iCnt == (iNo/2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool bret;

    printf("Enter Number : ");
    scanf("%d", &ivalue);

    bret = CheckPrime(ivalue);
    
    if(bret == true)
    {
        printf("%d is Prime Number ", ivalue);
    }
    else
    {
        printf("%d is Not Prime Number ", ivalue);
    }
    return 0;
}