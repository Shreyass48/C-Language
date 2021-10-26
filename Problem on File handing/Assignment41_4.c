//////////////////////////////////////////////////////////////////////
//
// Write application which accept file name from user and 
// display size of file.
// Input  : Demo.txt
// Output : File size is 56 bytes
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
        printf("Size of file is: %d bytes",iRet);
    }

    printf("\n");
    close(fd);
    return 0;
}