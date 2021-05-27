////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SearchFirst()  
// Description   :  Generic Program To Accept N Values And Search First Occurrence Of Any Specific Value.
// Input         :  Integer, Char
// Output        :  Integer, Char
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T No)
{
   int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        iCnt++;
   	    if(arr[i] == No)
   	    {
   		    break;
   	    }
    }
    return iCnt;
}

int main()
{
    int iRet = 0;

    int arr[] = {10,20,30,10,30,40,10,40,10};
    char brr[] = {'P','R','A','S','A','D'};
    
    iRet = SearchFirst(arr,9,40);
    cout << iRet << "\n";

    iRet = SearchFirst(brr,6,'A');
    cout << iRet << "\n";

    return 0;
}