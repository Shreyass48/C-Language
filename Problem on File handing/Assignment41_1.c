//////////////////////////////////////////////////////////////////////
//
// Write application which accept file name from user and open
// that file in read mode.
// Input  : Demo.txt
// Output : File opened successfully.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char name[20];

    printf("Enter file name:");
    scanf("%s",name);

    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Error to oprn file\n");
    }
    else
    {
        printf("File opened successfully.\n");
    }

    close(fd);
    return 0;
}