/////////////////////////////////////////////////////////////////////////////
//
// Accept string from user and count number of Capital and small char in it.
// Input  : ShreyAS
// Output : Small = 4, Capital = 3.
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


void DisplayCount(char *Str)
{
    int cCnt = 0, sCnt = 0;
    while(*Str != '\0')
    {
        if((*Str <= 'Z') && (*Str >= 'A'))
        {
            cCnt++;
        }
        else if((*Str <= 'z') && (*Str >= 'a'))
        {
            sCnt++;
        }
        Str++;
    }
    printf("Small letters are: %d\n",sCnt);
    printf("Capital letters are: %d\n",cCnt);
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    DisplayCount(Arr);

    return 0;
}