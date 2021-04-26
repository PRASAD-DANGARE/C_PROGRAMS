///////////////////////////////////////////////////////////
//
// Class Name    :  Arithematic
// Function Name :  Arithematic(),Addition(),Subtraction()
// Description   :  Accept Number From User, & Perform Addition, Subtraction V4
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  26 Mar 2021
//
///////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class Arithematic
{
    public:                             // Access specifier
    
    int iNo1, iNo2;                      // Charcteristics (kai lagnar ahei) 
    
    Arithematic(int x, int y)           // Constructor it get called implisitly when the object is created
    {
        iNo1 = x;
        iNo2 = y;
    }
    
    int Addition()                      // Behaviour(kai karnar)
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }
    
    int Substraction()                  // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }
};

int main()
{
    int iRet1 = 0, iRet2 = 0;

    Arithematic obj1(10,11);            // Object Creation
    Arithematic obj2(20,15);
    
    iRet1 = obj1.Addition();
    cout << "Additon is : " << iRet1 << "\n";
    
    iRet2 = obj2.Substraction();
    cout << "Substraction is : " << iRet2 << "\n";
    
    return 0;
}
