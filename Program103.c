///////////////////////////////////////////////////////////
//
// Function Name :  DisplayBinary()
// Description   :  Accept Number From User And Display It In Binary Format 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  25 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigit = 0; // in unsigned we can use 32 bit, and in signed we can use 31 bit 1 is reserve for sign 
    while(iNo > 0)                                                                    // 0 is positive, 1 is negative
    {
        iDigit = iNo % 2;
        printf("%u\t",iDigit);
        iNo = iNo / 2;
    }
}

int main()
{
    unsigned int iValue = 0; 
    
    printf("Enter number\n");
    scanf("%u",&iValue); // %u for unsigned 
    
    DisplayBinary(iValue);
    
    return 0;
}
