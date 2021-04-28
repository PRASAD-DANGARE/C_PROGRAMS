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
3   2   1
2   1
1

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
    
    void Pattern() // complixcity is N
    {
        int iValue = iNo, iTemp = 0;
        
        while(iValue > 0)
        {
            iTemp = iValue; // it's like backup 1234 
            while(iTemp > 0)
            {
                cout << iTemp % 10 << "\t";
                iTemp = iTemp / 10; // 4 3 2 1(1), 3 2 1(2), 2 1(3), 1(4) it remove the first element
            }
            cout << "\n";
            iValue = iValue / 10;
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
