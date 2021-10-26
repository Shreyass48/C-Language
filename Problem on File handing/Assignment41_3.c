//////////////////////////////////////////////////////////////////////
//
// Write application which accept file name from user and read all 
// data from that file and display contents on screen.
// Input  : Demo.txt
// Output : display all data
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0, iRet = 0;
    char name[20];
    char Buffer[1024];

    printf("Enter file name:");
    scanf("%s",name);

    fd = open(name, O_RDONLY);

    while((iRet = read(fd,Buffer,sizeof(Buffer)))!= 0)
    {
        write(1,Buffer,iRet);
    }

    close(fd);
    return 0;
}