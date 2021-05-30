///////////////////////////////////////////////////////////
//
// Description   :  Demonstration Of Call By Value, Reference, Address
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  29 May 2021
//
///////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void Swap(int *iNo1, int *iNo2) // Call By Address
{
    int temp;
    temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = temp;
}

/*void Swap(int iNo1, int iNo2) // Call By Value 
{
    int temp;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

void Swap(int &iNo1, int &iNo2) // Call By Reference
{
    int temp;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

*/

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter First Number : \n";
    cin >> iValue1;

    cout << "Enter Second Number : \n";
    cin >> iValue2;

    Swap(&iValue1, &iValue2); // Swap(100,200)
    
    cout << "After Swap Value 1 Is : " << iValue1 << "\n";
    cout << "After Swap Value 2 Is : " << iValue2 << "\n";

    return 0;
}