//////////////////////////////////////////////////////////////////////
//
// Write a program which accepts file name from user and count number of
// White spaces from that file.
// Input  : Demo.txt
// Output : Number of White spaces are 2
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountWhite(char Name[])
{
    int fd = 0, iRet = 0, iCnt = 0, i = 0;
    char Buffer[10];

    fd = open(Name, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCnt++;
            }
        }
    }

    return iCnt;

}
int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Enter file name:\n");
    scanf("%s",Fname);

    iRet = CountWhite(Fname);

    printf("Number of White spaces are : %d\n",iRet);

    return 0;
}