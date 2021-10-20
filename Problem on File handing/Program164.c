///////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file read data from file and close the file.
// Date   : 30/10/21
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //for RDWR


int main()
{
    int fd = 0, iRet = 0;    
    char Fname[30];
    char Data[7];

    printf("Enter filename:");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);    

    if(fd == -1)
    {
        printf("Unable to open  file\n");
        return -1;   
    }
    else
    {
        printf("file successfully opened with FD: %d\n",fd);
    }
            
    iRet = read(fd, Data, 6);

    printf("Data from the file:\n");
    write(1,Data,iRet);
    printf("\n");

    close(fd);
    return 0;
}
