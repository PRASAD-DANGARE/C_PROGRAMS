////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Array, ~Array, Addition, Frequency, SearchFirst, SearchLast, EvenCount, OddCount, Accept, Display()  
// Description   :  Accept Number From User And Perform Above Operations On Them
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  27 May 2021
//
////////////////////////////////////////////////////////////////////////////

# include <iostream>

using namespace std;

class Array
{
    private :
        int *Arr; 
        int iSize; 

    public :
        Array(int); 
        ~Array(); 
        int Addition(); 
        int Frequency(int); 
        int SearchFirst(int);  
        int SearchLast(int); 
        int EvenCount(); 
        int OddCount();
        void Accept(); 
        void Display(); 
};

Array :: Array(int iNo) 
{
    cout << "Inside Constructor \n";
    iSize = iNo; 
    Arr = new int[iSize]; 
}

Array :: ~Array() 
{
    cout << "Inside Distructor \n";
    delete []Arr; 
}

void Array :: Accept()
{
    cout << "Enter The Elements : \n";
    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
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

int Array :: Frequency(int iNo)
{
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int Array :: SearchFirst(int iNo)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
    }
    if(i == iSize)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int Array :: SearchLast(int iNo)
{
    int i = 0, temp = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            temp = i;
        }
    }
    if(temp == iSize)
    {
        return -1;
    }
    else
    {
        return temp + 1;
    }
}

int Array :: EvenCount()
{
    int iNo = 0, iCnt = 0;
    for(iNo = 0; iNo < iSize; iNo++)
    {
        if(Arr[iNo] % 2 == 0)
        {   
            iCnt++;
        }
    }
    return iCnt;
}

int Array :: OddCount()
{
    int iNo = 0, iCnt = 0;
    for(iNo = 0; iNo < iSize; iNo++)
    {
        if(Arr[iNo] % 2 != 0)
        {   
            iCnt++;
        }
    }
    return iCnt;
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


int main()
{
    int iNo = 0, iRet = 0;

    cout << "Enter The Size Of Array : ";
    cin >> iNo;

    Array *obj = new Array(iNo); 
    obj -> Accept(); 
    obj -> Display(); 

    iRet = obj -> Addition();
    cout << "Addition Of All Elements Is : " << iRet << "\n";

    cout << "Enter The Number To Check Frequency Of A Number : ";
    cin >> iNo;
    iRet = obj -> Frequency(iNo);
    cout << "Frequency is " << iRet << "\n";

    cout << "Enter The Number To Find First Occurance : ";
    cin >> iNo;
    iRet = obj -> SearchFirst(iNo);
    cout << "First Occurance Is At : " << iRet << "\n";

    cout << "Enter The Number To Find Last Occurance : ";
    cin >> iNo;
    iRet = obj -> SearchLast(iNo);
    cout << "Last Occurance Is At : " << iRet << "\n";

    iRet = obj -> EvenCount();
    cout << "Count Of Even Numbers Are : " << iRet << "\n";

    iRet = obj -> OddCount();
    cout << "Count Of Odd Numbers Are : " << iRet << "\n";

    delete obj; 

    return 0;
}