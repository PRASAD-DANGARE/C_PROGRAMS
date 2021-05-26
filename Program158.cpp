///////////////////////////////////////////////////////////
//
// Description   :  Accept N Numbers From User And Perform Addition Of That Numbers, Without Distructor
// Input         :  Int
// Output        :  Int
// Author        :  Prasad Dangare
// Date          :  18 May 2021
//
///////////////////////////////////////////////////////////

# include <iostream>

using namespace std;

class Array
{
    private :
        int *Arr; // array cha pointer
        int iSize; // array che size sangnar

    public :
        Array(int); // parameterised constructor
        //~Array(); // distructor
        void Accept();
        int Addition();
        void Display();
};

Array :: Array(int iNo) // parameterised constructor
{
    cout << "Inside Constructor \n";
    iSize = iNo; // array elements he iSize madhe gatla
    Arr = new int[iSize]; // line 36 je iSize madhe ghanar
}

/*Array :: ~Array() // distructor
{
    cout << "Inside Distructor \n";
    delete []Arr; // delete 100,200,300,400 the array, [] use for to clear all data
}*/

void Array :: Accept()
{
    cout << "Enter The Elements : \n";
    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

void Array :: Display()
{
    cout << "Elements Of Array Are : \n";
    for (int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "\n";
    }
    cout << "\n";
}

int Array :: Addition()
{
    int iSum = 0;
    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int iNo = 0, iRet = 0;

    cout << "Enter The Size Of Array : \n";
    cin >> iNo;

    // Array *obj = new Array(iNo); // Call To The Constructor
    Array obj(iNo); // Call to constructor

    obj.Accept(); // getter
    obj.Display(); // setter

    iRet = obj.Addition();
    cout << "Addition Of All Elements Is : " << iRet << "\n";

    // delete obj; // Call To The Distructor, delete the object 200 - 212

    return 0;
}