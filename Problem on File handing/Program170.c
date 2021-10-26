///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file and disply 5 letters from file.
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
    char Arr[10];

    fd = open("LB17.txt", O_RDWR); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File open successfully\n");
    }

    read(fd,Arr,5);
    printf("Data from file is:\n");

    write(1,Arr,5);
    printf("\n");

    close(fd);
    return 0;
}
