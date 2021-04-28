///////////////////////////////////////////////////////////
//
// Class Name    :  StringX
// Function Name :  Accept(),StrlenX()
// Description   :  Accept String From User And Count Length Of The String
// Input         :  String
// Output        :  String
// Author        :  Prasad Dangare
// Date          :  27 Mar 2021
//
///////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

/*

Input : Hello
Output : string length is : 5

*/
class StringX
{
    public:
    
    char str[30]; // array

    void Accept()
    {
        cout << "Enter String\n";
        scanf("%[^'\n']s",str);
    }
    
    int StrlenX()
    {
        int iCnt = 0;
        char *ptr = str; // pointer which points to str
        while(*ptr != '\0')
        {
            ptr++;
            iCnt++;
        }
        return iCnt;
    }
};

int main()
{
    int ret = 0;
    
    StringX obj;
    
    obj.Accept();
    
    ret = obj.StrlenX();
    
    cout << "String length is : " << ret << "\n";
    
    return 0;
}
