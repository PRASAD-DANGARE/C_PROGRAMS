///////////////////////////////////////////////////////////
//
// Class Name    :  FileX
// Function Name :  ----
// Description   :  Accept File Name From User And Check Whether File Is Present Or Not
// Input         :  String
// Output        :  String
// Author        :  Prasad Dangare
// Date          :  27 Mar 2021
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<io.h>

using namespace std;

// O_RDONLY         Read
// O_WRONLY        Write
// O_RDWR           Read & Write

class FileX
{
    public:
    int fd; // file descripter its an number to find our file (unique no)
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   
            cout << "Unable to open file\n";
        }
        else
        {
            cout << "File Found / Exist..\n";
        }
    }
    ~FileX()
    {
        close(fd);
    }
};

int main()
{
    char str[30];
    cout << "Enter file name\n";
    cin >> str;
    FileX obj(str);
    return 0;
}
