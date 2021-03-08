////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountDiff()
// Description   :  Accept Number From User, Addition All Even & Odd Numbers & Perform Subtraction
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  06 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, even = 0, odd = 0, iRet = 0;

    if(iNo < 0)
    {
        iNo =- iNo;
    }

    while(iNo != 0)
    {
        if(((iDigit = iNo % 10 ) % 2) == 0)
        {
            even = even + iDigit;
        }
        else if(iDigit % 2 != 0)
        {
            odd = odd + iDigit;
        }
        iNo = iNo / 10;
    }
    printf("Addition Of Even Numbers Are %d\n", even);
    printf("Addition Of Odd Numbers Are %d\n", odd);
    
    printf("Subtraction Is : ", iRet);
    return iRet = even - odd; 
}

int main()
{
    int iValue = 0; 
    int iRet = 0;
 
    printf("Enter Number : ");
    scanf("%d", &iValue);
 
    iRet = CountDiff(iValue);
    printf("%d", iRet);
 
    return 0;
}