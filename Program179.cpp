///////////////////////////////////////////////////////////
//
// Description   :  Accept Number From User And Find Maximum Number
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  29 May 2021
//
///////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int Max(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout << "Enter First Value : \n";
    cin >> iValue1;

    cout << "Enter Second Value : \n";
    cin >> iValue2;

    iRet = Max(iValue1, iValue2); // Swap(iValue1,iValue2)
    
    cout << "Maximum Is : " << iRet << "\n";

    return 0;
}