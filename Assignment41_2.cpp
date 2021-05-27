////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Max()  
// Description   :  Generic Program To Find Largest Number From Three Numbers.
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

template <class T>
T Max(T No1, T No2, T No3)
{
    if(No1 >= No2 && No1 >= No3)
    {
        return No1;
    }
    else if(No2 >= No1 && No2 >= No3)
    {
        return No2;
    }
    else if(No3 >= No1 && No3 >= No2)
    {
        return No3;
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0;
    int iRet = 0;

    cout << "Enter First Number : ";
    cin >> iNo1;

    cout << "Enter Second Number : ";
    cin >> iNo2;

    cout << "Enter thard Number : ";
    cin >> iNo3;

    iRet = Max(iNo1, iNo2, iNo3);
    cout << "Largest Number From Three Numbers Are : " << iRet << "\n";

    return 0;
}