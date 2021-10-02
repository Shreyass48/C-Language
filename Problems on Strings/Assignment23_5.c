/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and count number of
// white spaces
// Input  : Marve ll ouS
// Output : 2
//
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int CountWhite(char *Str)
{
    int iCnt = 0;
    while (*Str != '\0')
    {
        if (*Str == ' ')
        {
            iCnt++;
        }
        Str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);
    printf("%d\n", iRet);

    return 0;
}
