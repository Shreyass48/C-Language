///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file and disply 5 letters after 5 letters from file.(Random access)
// Date   : 25/10/21
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  

// file data : abcdefghijklmnopqrstuvwxyz

int main()
{
    int fd = 0;
    char Arr[10];

    fd = open("LB17.txt", O_RDWR); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File open successfully\n");
    }

    lseek(fd,5,0);  //set offset from strt location 

    read(fd,Arr,5);
    write(1,Arr,5);  //it prints fghij

    printf("\n");

    lseek(fd,5,1); //set offset from current location 

    read(fd,Arr,5);
    write(1,Arr,5);  // it print pqrst

    printf("\n");

    close(fd);
    return 0;
}



// lseek 3rd parameter options:
// 0 : from strt position
// 1 : from current position
// 2 : from end file