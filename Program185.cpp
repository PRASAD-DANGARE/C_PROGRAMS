///////////////////////////////////////////////////////////
//
// Description   :  Generic Program To Accept N Number From User And Find Maximum Number V2
// Function Name :  Array, ~Array, Accept, Maximum
// Class Name    :  Array
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  29 May 2021
//
///////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

template <class T>
class Array // generic class
{
    private : 
        T * Arr;
        int iSize;

    public : 
        Array(int iNo)
        {
            iSize = iNo;
            Arr = new T[iSize];
        }
        ~Array()
        {
            delete [] Arr;
        }
        void Accept()
        {
            cout << "Enter The Values \n";
            for(int i = 0; i < iSize; i++)
            {
                cin >> Arr[i];
            }
        }
        T Maximum()
        {
            T Max = Arr[0];
            for(int i = 0; i < iSize; i++)
            {
                if(Arr[i] > Max)
                {
                    Max = Arr[i];
                }
            }
            return Max;
        }
};

int main()
{
    int iRet = 0;
    int iNo = 0;

    cout << "Enter Number Of Elements : ";
    cin >> iNo;

    Array <int> * obj = new Array <int> (iNo);

    obj -> Accept();
    iRet = obj -> Maximum();

    cout << "Maximum Number Is : " << iRet << "\n";

    delete obj;

    return 0;
}