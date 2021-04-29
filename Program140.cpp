///////////////////////////////////////////////////////////
//
// Class Name    :  FileX
// Function Name :  ReadData()
// Description   :  Accept File Name From User And Ask How Many Characters To Display 
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
    
    void ReadData(int size)
    {
        char Arr[20] = {'\0'};
        read(fd,Arr,size);
        printf("%s",Arr);
    }
};

int main()
{
    int no;
    char str[30];
    
    cout << "Enter file name\n";
    cin >> str;
    
    FileX obj(str);
    
    cout << "Enter number of characters you want to read.\n";
    
    cin >> no;
    
    obj.ReadData(no);
    
    return 0;
}
