///////////////////////////////////////////////////////////
//
// Class Name    :  Numbers
// Function Name :  Accept(),Display(),Addition()
// Description   :  Accept Elements From User & Perform Addition
//                  Application Using Oop Techniques
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  26 Mar 2021
//
///////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class Numbers
{

    public:
    
    int *Arr; // pointer 8 bytes, integer 4 bytes so total is 12 bytes
    int iSize;
    
    Numbers(int No) 
    {
        cout << "Inside Constructor\n";
        iSize = No;
        Arr = new int[iSize];
    }

    void Accept() // getter method
    {
        int i = 0;

        cout << "Inside Accept\n";
        cout << "Enter the values\n";

        for(i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }

    void Display() // setter method
    {
        int i = 0;

        cout << "Inside Display\n";
        cout << "Values are\n";

        for(i = 0; i < iSize; i++)
        {
            cout << Arr[i] << "\n";
        }
    }

    int Addition()
    {
        int i = 0, iSum = 0;
        for(i = 0; i < iSize; i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }

    ~Numbers() // distructor get called implicitly when memory was deallocated
    {
        cout << "Inside Destructor\n";
        delete [] Arr;
    }
};

int main()
{
    int iNo = 0, iRet = 0;
    
    cout << "Inside Main\n";
    cout << "Enter number of elements\n";

    cin >> iNo;
    
    Numbers obj(iNo);
    
    obj.Accept();
    obj.Display();
    
    iRet = obj.Addition();
    
    cout << "Addition is : " << iRet << "\n";
    
    return 0;
}
