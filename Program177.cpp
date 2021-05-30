///////////////////////////////////////////////////////////
//
// Description   :  Generic Program To Accept 2 Number From User And Swap Them
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  29 May 2021
//
///////////////////////////////////////////////////////////


#include <iostream>

using namespace std;

// Specific Function
void Swap(int &iNo1, int &iNo2) 
{
    int temp;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

template <class T> // Template Header

void SwapX(T &iNo1, T &iNo2) 
{
    T  temp;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter First Number : \n";
    cin >> iValue1;

    cout << "Enter Second Number : \n";
    cin >> iValue2;

    SwapX(iValue1, iValue2); // Swap(iValue1,iValue2)
    
    cout << "After Swap Value 1 Is : " << iValue1 << "\n";
    cout << "After Swap Value 2 Is : " << iValue2 << "\n";

    return 0;
}