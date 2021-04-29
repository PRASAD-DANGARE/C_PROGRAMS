///////////////////////////////////////////////////////////
//
// Class Name    :  FileX
// Function Name :  WriteData()
// Description   :  Accept File Name From User And Insert Pune At End Of The File  
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

// #define O_WRONLY 0x008
// #define O_APPEND 0x004

using namespace std;

class FileX
{
    public:
    
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY | O_APPEND);
        if(fd == -1)
        {
            cout << "Unable to create file\n";
            exit(0);
        }
        else
        {
            cout << "File succesfully created..\n";
        }
    }
    ~FileX()
    {
        close(fd);
    }
    void WriteData()
    {
        char str[] = " Pune";
        write(fd,str,5);
    }
};

int main()
{
    char str[30];
    
    cout << "Enter file name\n";
    cin >> str;
    
    FileX obj(str);
    
    obj.WriteData();
    
    return 0;
}
