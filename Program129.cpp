///////////////////////////////////////////////////////////
//
// Class Name    :  StringX
// Function Name :  Accept(),Pattern()
// Description   :  Accept String From User And Display Bellow Pattern
// Input         :  String
// Output        :  String
// Author        :  Prasad Dangare
// Date          :  27 Mar 2021
//
///////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

// Input : Hello           without considering string length

/*
 
 H  e   l   l   o
 H  e   l   l
 H  e   l
 H  e
 H
 
*/

class StringX
{
    public:
    
    char str[30];
    
    void Accept()
    {
        cout << "Enter String\n";
        scanf("%[^'\n']s",str);
    }

    void Pattern()
    {
        char *ptr = str; // pointer which points to str 100
        char *s = str; // pointer which points to str 100
        int iCnt = 0;  

        while(*ptr != '\0') // complixcity is N^2
        {
            while(*(s+iCnt) != '\0') // 100 + 0 = *100 != '\0', 100+1, 100+2, 100+3, 100+4, 100+5
            {
                cout << *s << "\t"; // H E L L O (1), H E L L(2), H E L(3), H E(4), H(5)
                s++; // 101,102,103,104,105(1), 101,102,103,104(2), 101,102,103(3), 101,102(4), 101(5)
            }
            s = str; // reset To 100 which goes to 105
            ptr++; // aak step pudhe, 101,102,103,104,105
            iCnt++; // icnt become 1, after every time iteration is reduce by 1, 
                    //100+1 != '\0' means stop at 103 and see 104 value, 102+1, 103+1, 104+1  106 is \0
            cout << "\n";
        }
    }
};

int main()
{
    StringX obj;
    
    obj.Accept();
    obj.Pattern();
    
    return 0;
}
