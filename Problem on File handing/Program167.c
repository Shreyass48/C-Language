///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Program to read data from one file and copy into another (new) file.
// Date   : 30/10/21
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //for RDWR


int main()
{
    int fdsrc = 0, fddest = 0, iRet = 0;    
    char Fname1[30];
    char Fname2[30];
    char Buffer[1024];    //Mug(1024byte = 1kb)

    printf("Enter source filename:");
    scanf("%s",Fname1);

    fdsrc = open(Fname1, O_RDONLY);    

    if(fdsrc == -1)
    {
        printf("Unable to open  file\n");
        return -1;   
    }
    else
    {
        printf("file successfully opened with FD: %d\n",fdsrc);
    }

    printf("Enter destination filename:");
    scanf("%s",Fname2);

    fddest = creat(Fname2,0777);



    printf("Data from file is:\n");    
    //main logic 
    while((iRet = read(fdsrc,Buffer,sizeof(Buffer)))!= 0)        //read chi value jo prynt 0 hot nhi toprynt.
    {
        write(fddest,Buffer,iRet);
    }
    printf("\n"); 

    close(fdsrc);
    close(fddest);
    return 0;
}
