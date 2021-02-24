////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Division()
// Description   :  Perform Division Of Two Numbers
// Input         :  Integer, Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  24 Feb 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h> // Header File

int Division(int iNo1, int iNo2) // 2 Parameters
{
    int iAns = 0; // Catch 2 Value In iAns 
    
    if(iNo1 % iNo2) // Condition
    {
        return -1; // Errornious Termination
    }

    iAns = iNo1 / iNo2; // Perform Division

    return iAns;
}

int main() // Entry Point Function
{
    int iValue1 = 15, iValue2 = 5; // 2 Containers With Value
    int iRet = 0; // Empty Container Where We Get 2 Values As iValue1, iValue2

    iRet = Division(iValue1, iValue2); // Function Call 
    printf("Division is %d", iRet); // Display The Value

    return 0; // Success
}
