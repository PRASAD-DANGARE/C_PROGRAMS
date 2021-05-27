////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Min()  
// Description   :  Generic Program To Accept N Values From User And Return Smallest Values.
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

template <class T>

T Min(T Arr[], T iSize)
{
    T iMax = Arr[0];
    
    for(int i = 1; i < iSize; i++)
    {
        if(Arr[i] < iMax)
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

    iRet = Min(arr, iSize);
    cout << "Largest Number is : " << iRet << "\n";

    delete [] arr;

    return 0;
}