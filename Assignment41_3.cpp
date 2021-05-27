////////////////////////////////////////////////////////////////////////////
//
// Function Name :  AddN()  
// Description   :  Generic Program To Accept N Values From User And Return Addition Of That Values
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

template <class T>
T AddN (T *Arr, T iSize)
{
    T iSum = 0;
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    
    return iSum;
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

    iRet = AddN(arr, iSize);
    cout << "Addition is : " << iRet << "\n";

    delete [] arr;

    return 0;
}