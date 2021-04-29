///////////////////////////////////////////////////////////
//
// Class Name    :  FileX
// Function Name :  ReadData()
// Description   :  Accept File Name From User And Read 10 Bytes of Data From File 
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
        char Arr[20] = {'\0'};
        read(fd,Arr,10); // read rom fd, in empty space Arr, 10 bytes only
        printf("%s",Arr);
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