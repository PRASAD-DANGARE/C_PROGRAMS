////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()  
// Description   :  Generic Program To Accept One Value And One Number From User, Print Number Of Times On Screen.
// Input         :  Integer, Float, Char
// Output        :  Integer, Float, Char
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

template<class T>
void Display(T value, int isize)
{
	for(int i = 1; i <= isize; i++)
	{
		cout << value << "\t";
	}
	cout << "\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    
    return 0;
}