///////////////////////////////////////////////////////////
//
// Class Name    :  Arithematic
// Function Name :  Arithematic(),Addition(),Subtraction()
// Description   :  Accept Number From User, & Perform Addition, Subtraction V5
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
    
    int iNo1,iNo2;                      // Charcteristics
    
    Arithematic(int x, int y)           // Constructor
    {
        iNo1 = x;
        iNo2 = y;
    }
    
    int Addition()                      // Behaviour
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
    int i = 0, j = 0;

    cout << "Enter first number" << "\n";
    cin >> i;
    
    cout << "Enter second number" << "\n";
    cin >> j;
    Arithematic obj1(i,j);              // Object Creation
    
    cout << "Enter first number" << "\n";
    cin >> i;
    
    cout << "Enter second number" << "\n";
    cin >> j;
    Arithematic obj2(i,j);
    
    iRet1 = obj1.Addition();
    cout << "Additon is : " << iRet1 << "\n";
    
    iRet2 = obj2.Substraction();
    cout << "Substraction is : " << iRet2 << "\n";
    
    return 0;
}