/////////////////////////////////////////////////////////////////////////////
//
// Accept string from user and count vowels.(Case sensitive)
// Input  : Shreyas
// Output : 2
// Date   : 11/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountV(char *Str)
{
    int iCnt = 0;

    if(Str == NULL) //Filter
    {
        return -1;
    }

    while (*Str != '\0')
    {
        if((*Str == 'a') || (*Str == 'e') || (*Str == 'i') || (*Str == 'o') || (*Str == 'u'))
        {
            iCnt++;
        }
        Str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s",Arr);

    iRet = CountV(Arr);

    printf("Number of vowels are:%d\n",iRet);

    return 0;
}