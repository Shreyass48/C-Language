/////////////////////////////////////////////////////////////////////////////
//
// Accept string from user and count number of Capital char in it.
// Input  : Shreyas
// Output : 1
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


int CapitalCount(char *Str)
{
    int iCnt = 0;
    while(*Str != '\0')
    {
        if((*Str <= 'Z') && (*Str >= 'A'))
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
    scanf("%s",Arr);

    iRet = CapitalCount(Arr);

    printf("number of capital letters: %i\n",iRet);
    
    return 0;
}