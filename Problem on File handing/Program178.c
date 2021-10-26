///////////////////////////////////////////////////////////////////////
//
// -File Manipulaton(System Progamming)
// Accept file name from user and count Capital letters in that file.
// Date   : 25/10/21
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  


int main()
{
    int fd = 0, iRet = 0, iCnt = 0, i = 0;
    char Fname[20];
    char Buffer[10];

    printf("Enter file name: ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,10)) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
            {
                iCnt++;
            }
        }
    }
    

    
    printf("Total Number of Capital letters are :%d\n",iCnt);

    close(fd);
    return 0;
}


