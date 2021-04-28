///////////////////////////////////////////////////////////
//
// Class Name    :  NumberX
// Function Name :  Accept(),Pattern()
// Description   :  Accept Number From User And Display Bellow Pattern
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  27 Mar 2021
//
///////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

// Input : 1234

/*

4   3   2   1
4   3   2
4   3
4

*/

class NumberX
{
    public:
    
    int iNo;
    
    void Accept()
    {
        cout << "Enter Number\n";
        cin >> iNo;
    }
    
    void Pattern()
    {
        int iValue = iNo, iCnt = 0, i = 0, j = 0;
        while(iValue > 0) // from this we get no of digits
        {
            iCnt++;
            iValue = iValue / 10;
        }
        iValue = iNo; // 1 2 3 4
        for(i = iCnt; i > 0; i--) // 4321
        {
            for(j = 0; j < i; j++) // 0 1 2 3 4
            {
                cout << iValue % 10 << "\t";
                iValue = iValue / 10;
            }
            cout << "\n";
            iValue = iNo; // reset 
        }
    }
};

int main()
{
    NumberX obj;
    
    obj.Accept();
    obj.Pattern();
    
    return 0;
}
