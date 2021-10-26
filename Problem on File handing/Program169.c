///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file and enter data at end of file.
// Date   : 25/10/21
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  


int main()
{
    int fd = 0;
    char Arr[] = "Hello";

    fd = open("LB17.txt", O_RDWR | O_APPEND);   //O_Append(Flag or MACRO) : data insert at end

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File open successfully\n");
    }

    write(fd,Arr,5);

    close(fd);
    return 0;
}
