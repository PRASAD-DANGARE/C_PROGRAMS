////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Frequency()  
// Description   :  Generic Program To Accept N Values And Count Frequency Of Any Specific Value
// Input         :  Integer, Char
// Output        :  Integer, Char
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

template<class T>
void Frequency(T *arr,int iSize,T No)
{
   int iCnt = 0;

   for(int i = 0; i < iSize; i++)
   {
   	    if(arr[i] == No)
   	    {
   		    iCnt++;
   	    }
   }
   cout << iCnt << "\n";	
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    char brr[] = {'P','R','A','S','A','D'};

    Frequency(arr,9,10);
    Frequency(brr,6,'A');

    return 0;
}