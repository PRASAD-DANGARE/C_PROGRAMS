///////////////////////////////////////////////////////////
//
// Function Name :  MaxMin()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User And Find Maximum & Minimum Number & Find Difference Using Forloop V2
// Author        :  Prasad Dangare
// Date          :  10 Mar 2021
//
///////////////////////////////////////////////////////////


#include<stdio.h>

int MaxMin(int iNo)
{
    int iMax = 0, iMin = 9, iDigit = 0;

    for(; iNo > 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
    }
    printf("Maximum Number is : %d\n", iMax);
    printf("Minimum Number is : %d\n", iMin);
    return iMax - iMin;
}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue1);
    
    iRet = MaxMin(iValue1);
    
    printf("Diffrence is : %d ",iRet);
    return 0;
}