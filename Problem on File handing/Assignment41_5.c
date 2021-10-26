//////////////////////////////////////////////////////////////////////
//
// Write application which accept file name from user and one string from user. 
// Write that string at the end of file.
// Input  : Demo.txt
//          Hello world
// Output : Write Hello World at the end of Demo.txt file
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
    char data[20];

    printf("Enter file name:");
    scanf("%s",name);

    fd = open(name, O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("Enter Data:");
    scanf("%s",data);

    

    write(fd,data, // condition);

    close(fd);
    return 0;
}