///////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to creat() a new file(user input).
// Date   : 30/10/21
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<io.h>  for windows

int main()
{
    int fd = 0;   //File descriptor. 
    char Fname[30];

    printf("Enter filename:");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("file successfully created \n");
    }
    return 0;
}