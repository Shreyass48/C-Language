//////////////////////////////////////////////////////////////////////
//
// Write a program which accepts file name and one count from user and read
// that number of characters from starting position.
// Input  : Demo.txt     12
// Output : Display first 12 characters from Demo.txt
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


void CountSmall(char Name[], int iSize)
{
    int fd = 0, iRet = 0;
    char Buffer[10];

    fd = open(Name, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    
    //lseek(fd,0,0);
    iRet = read(fd,Buffer,sizeof(Buffer));

    

    write(1,Buffer,iSize);
    printf("\n");

    close(fd);

}
int main()
{
    char Fname[20];
    int iValue = 0;
    char ch = '\0';

    printf("Enter file name:\n");
    scanf("%s",Fname);

    printf("Enter the number of Character:\n");
    scanf(" %d",&iValue);
 
    CountSmall(Fname, iValue);

    return 0;
}