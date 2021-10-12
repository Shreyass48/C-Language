/////////////////////////////////////////////////////////////////////////////
//
// Accept string and char from user and print freq of that char.
// Input  : shreyas   s
// Output : 2
// Date   : 11/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountFreq(char *Str, char ch)
{
    int iCnt = 0; 
    if(Str == NULL)  //Filter.
    {
        return -1;
    }

    while (*Str != '\0')
    {
        if(*Str == ch)
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
    char cValue= '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);
    printf("Enter character:\n");
    scanf(" %c",&cValue);   //IMP space before %c.

    iRet = CountFreq(Arr, cValue);

    printf("Frequency is:%d\n",iRet);

    return 0;
}