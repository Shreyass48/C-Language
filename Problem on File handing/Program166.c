///////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file read whole data from file and close the file.
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
    char Buffer[1024];    //Mug(1024byte = 1kb)

    printf("Enter filename:");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);    

    if(fd == -1)
    {
        printf("Unable to open  file\n");
        return -1;   
    }
    else
    {
        printf("file successfully opened with FD: %d\n",fd);
    }
    printf("Data from file is:\n");    
    //main logic 
    while((iRet = read(fd,Buffer,sizeof(Buffer)))!= 0)        //read chi value jo prynt 0 hot nhi toprynt.
    {
        write(1,Buffer,iRet);
    }
    printf("\n"); 

    close(fd);
    return 0;
}
