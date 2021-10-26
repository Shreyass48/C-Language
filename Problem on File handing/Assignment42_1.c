//////////////////////////////////////////////////////////////////////
//
// Write a program which accepts file name from user and count number of
// capital characters from that file.
// Input  : Demo.txt
// Output : Number of capital characters are 23
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountCapital(char Name[])
{
    int fd = 0, iRet = 0, i = 0, iCnt = 0;
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
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
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

    iRet = CountCapital(Fname);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}