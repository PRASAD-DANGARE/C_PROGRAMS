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
// O_CREAT           Create new file
// User

class FileX
{
    public:
    
    int fd;
    
    FileX(char Name[])  // FileX(char * Name)
    {
        fd = creat(Name,0777); // 0 for octal and 777 is :

        // User Of File :           1) OWNER                       2) GROUP                  3) OTHER
        //                A) Read B) Write C) Execute     A) Read B) Write C) Execute    A) Read B) Write C) Execute
        //                    4        2        1               4        2         1         4        2        1
        //       0                4+2+1 = 7                        4+2+1 = 7                      4+2+1 = 7
        
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
};

int main()
{
    char str[30];           // 100
    
    cout << "Enter file name\n";
    cin >> str;
    
    FileX obj(str);     // Filex obj(100)
    
    return 0;
}
