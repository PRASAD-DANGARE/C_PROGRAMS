///////////////////////////////////////////////////////////
//
// Class Name    :  FileX
// Function Name :  WriteData()
// Description   :  Accept File Name From User And Insert Pune At Beginning Of The File 
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

using namespace std;

class FileX
{
    public:
    
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY);
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
        char str[] = "Pune"; // inserted at beginning of the string
        write(fd,str,4);
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
