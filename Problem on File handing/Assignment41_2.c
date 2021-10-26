//////////////////////////////////////////////////////////////////////
//
// Write application which accept file name from user and 
// create that file.
// Input  : Demo.txt
// Output : File successfully created.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char name[10];

    printf("Enter file name:");
    scanf("%s",name);

    fd = creat(name,0777);

    if(fd == -1)
    {
        printf("File not created!\n");
    }
    else
    {
        printf("File successfully created!\n");
    }

    close(fd);
    return 0;
}