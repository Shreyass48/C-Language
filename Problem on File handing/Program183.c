///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Accept file name from user and count size of file in bytes.(using lseek)
// Date   : 25/10/21
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  


int main()
{
    int fd = 0, iRet = 0;
    char Fname[20];

    printf("Enter file name: ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    iRet = lseek(fd,0,2);

    
    printf("Total Number of size is :%d\n",iRet);

    close(fd);
    return 0;
}


