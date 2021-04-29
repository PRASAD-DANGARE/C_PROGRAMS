///////////////////////////////////////////////////////////
//
// Class Name    :  FileX
// Function Name :  ReadData()
// Description   :  Accept File Name From User And Display All Contents Of File 
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
    
    void ReadData()
    {
        char Arr[10]; // glass je 10 byte cha patet read karnar
        int ret = 0;
        
        while((ret = read(fd,Arr,10)) != 0) // if total bytes are 65 10x6 + 5 + 0 then false
        {
            printf("%d\n",ret);
            write(1,Arr,ret);
        }
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
