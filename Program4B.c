//////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description   :  Accept Number From User, Display That Number And Perform Addition Of That Number Using Whileloop 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Feb 2021
//
//////////////////////////////////////////////////////////////


#include <stdio.h>

int Display(int iNo)
{
    int iCnt = 1, isum = 0;

    while( iNo >= iCnt)
    {
        printf("%d ", iCnt);
        isum = isum + iCnt;
        iCnt++;
    }
    
    return isum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Display(iValue);
    printf("\nAddition is : %d\n", iRet);
    return 0;
}
