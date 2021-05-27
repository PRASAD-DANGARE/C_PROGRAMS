////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Multiply()  
// Description   :  Generic Program To Multiply Two Numbers.
// Input         :  Integer, Float
// Output        :  Integer, Float
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    
    printf("%d\n", iRet);
    
    float fRet = Multiply(10.0f, 20.0f);
    
    printf("%f\n", fRet);
    
    return 0;
}