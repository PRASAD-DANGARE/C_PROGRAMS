///////////////////////////////////////////////////////////
//
// Description   :  Accept Number And Display It In Reverse Order Using Recursion 
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  19 May 2021
//
///////////////////////////////////////////////////////////

# include <stdio.h>

void DisplayR(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t", iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d", &iValue);

    DisplayR(iValue);

    printf("End Of Main \n");
    return 0;
}