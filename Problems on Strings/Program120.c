/////////////////////////////////////////////////////////////////////////////
//
// Accept string from user and count number of whiten spaces in it.
// Input  : ShreyAS
// Output : Small = 4, Capital = 3.
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountSpaces(char *Str)
{
    int iCnt = 0;
    while(*Str != '\0')
    {
        if(*Str == ' ')
        {
            iCnt++;
        }
        Str++;
    }
   return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpaces(Arr);

    printf("Number of white Spaces are: %d\n",iRet);
    return 0;
}