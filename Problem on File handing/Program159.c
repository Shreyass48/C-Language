///////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open() file(user input).
// Date   : 30/10/21
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //for RDWR
//#include<io.h>  for windows

int main()
{
    int fd = 0;    
    char Fname[30];

    printf("Enter filename:");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);     //RD = read , WR= write

    if(fd == -1)
    {
        printf("Unable to open  file\n");
    }
    else
    {
        printf("file successfully opened with FD: %d\n",fd);
    }
    return 0;
}


//O_RDONLY : read only
//O_WRONLY : write only