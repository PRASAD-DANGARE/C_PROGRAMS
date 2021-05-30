///////////////////////////////////////////////////////////
//
// Description   :  Generic Program To Accept N Number From User And Find Maximum Number
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  29 May 2021
//
///////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

template <class T>

T Maximum(T Arr[], T iSize) // generic function
{
    T iMax = Arr[0];
    
    for(int i = 1; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int *arr = NULL;
    int iSize = 0, iRet = 0;

    cout << "Enter Number of Elements : ";
    cin >> iSize;

    arr = new int[iSize];

    cout << "Enter The Values : \n";

    for(int i = 0; i < iSize; i++)
    {
        cin >> arr[i];
    }

    iRet = Maximum(arr, iSize);
    cout << "Largest Number is : " << iRet << "\n";

    delete [] arr;

    return 0;
}