//////////////////////////////////////////////////////////////////////
//
// Write a program which accepts file name from user and count number of
// small characters from that file.
// Input  : Demo.txt
// Output : Number of small characters are 20
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountSmall(char Name[])
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
            if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
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

    iRet = CountSmall(Fname);

    printf("Number of small characters are : %d\n",iRet);

    return 0;
}