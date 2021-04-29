///////////////////////////////////////////////////////////
//
// Class Name    :  FileX
// Function Name :  ReadData()
// Description   :  Accept File Name From User And Read 10 Bytes of Data From File V2
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

//  stdin       Standard input device       Keyboard        0
//  stdout     Standard output device     Monitor           1
//  stderr      Standard Error device       Monitor           2

class FileX
{
    public:
    
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   
            cout << "Unable to create file\n";
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
    
    void ReadData()
    {
        char Arr[20];
        read(fd,Arr,10);
        write(1,Arr,10); //printf("%s",Arr);
    }
};

int main()
{
    char str[30];
    cout << "Enter file name\n";
    cin >> str;
    
    FileX obj(str);
    
    obj.ReadData();
    
    return 0;
}