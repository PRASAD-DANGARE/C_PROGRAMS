////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reveres()  
// Description   :  Generic Program To Accept N Values And Reverse The Contents.
// Input         :  Integer, Char
// Output        :  Integer, Char
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
	for(int i = iSize - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

int main()
{
	int arr[] = {10,20,30,40,50,60,70,80,90};
    char brr[] = {'P','R','A','S','A','D'};
	
    Reverse(arr,9);
    cout << "\n";
    Reverse(brr, 6);

	return 0;
}