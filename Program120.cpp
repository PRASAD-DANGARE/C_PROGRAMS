///////////////////////////////////////////////////////////
//
// Class Name    :  Arithematic
// Function Name :  Accept(),Addition(),Subtraction()
// Description   :  Accept Number From User, & Perform Addition, Subtraction V2
//               :  Application Using Oop Techniques
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  26 Mar 2021
//
///////////////////////////////////////////////////////////

#include<iostream>

using namespace std;            // oop approach

class Arithematic               // class creation/Declaration
{
    public:                     // Access specifier
    
    int iNo1, iNo2;              // Charcteristics (Data Members/Variables)
    
    void Accept()               // Behaviour (Function)
    {
        cout << "Enter first number\n";
        cin >> iNo1;

        cout << "Enter second number\n";
        cin >> iNo2;
    }
    
    int Addition()              // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }
    
    int Substraction()      // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }
};

int main()
{
    int iRet = 0;

    Arithematic obj;        // Object Creation
    
    obj.Accept(); // in obj 2 values is stored as 10, 11
    
    iRet = obj.Addition();
    cout << "Additon is : " << iRet << "\n";
    
    iRet = obj.Substraction();
    cout << "Substraction is : " << iRet << "\n";
    
    return 0;
}