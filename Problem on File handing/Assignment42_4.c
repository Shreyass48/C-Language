//////////////////////////////////////////////////////////////////////
//
// Write a program which accepts file name and one character from user and
// count number of occurrences of that characters from that file
// Input  : Demo.txt     M
// Output : Frequency of M is 7
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int CountChar(char Name[], char cVal)
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
            if(Buffer[i] == cVal)
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
    char ch = '\0';

    printf("Enter file name:\n");
    scanf("%s",Fname);

    printf("Enter Character:\n");
    scanf(" %c",&ch);

    iRet = CountChar(Fname, ch);

    printf("Frequency of %c is %d\n",ch,iRet);

    return 0;
}