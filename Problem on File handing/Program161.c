///////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to open file write data into file and close the file.
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
    char Data[] = "Marvellous Infosystems";

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
                //1   2    3
    iRet = write(fd, Data, 10);

    printf("%d bytes gets successfully written in file\n",iRet);

    return 0;
}
 //1 = file des
 //2 = Array
 //3 = data in byte(Array size including white spaces)