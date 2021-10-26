///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file and disply last 5 letters from file.
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
    
    // 0    From starting position
    // 1    From Current position
    // 2    From end of the file
    
    lseek(fd,-5,2);
    
    read(fd,Arr,5);
    
    
    write(1,Arr,5);
    
    printf("\n");
    
    close(fd);
    
    return 0;
}




// lseek 3rd parameter options:
// 0 : from strt position
// 1 : from current position
// 2 : from end file