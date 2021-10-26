///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file and disply 5 letters after 5 letters from file.
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

    lseek(fd,5,0);  //set offset(location)

    read(fd,Arr,5);
    printf("Data from file is:\n");

    write(1,Arr,5);
    printf("\n");

    close(fd);
    return 0;
}



// lseek 3rd parameter options:
// 0 : from strt position
// 1 : from current position
// 2 : from end file