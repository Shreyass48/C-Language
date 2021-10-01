/////////////////////////////////////////////////////////////////////////////
//
// Accept string from user and count number of small char in it.
// Input  : Shreyas
// Output : 6
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


int SmallCount(char *Str)
{
    int iCnt = 0;
    while(*Str != '\0')
    {
        if((*Str <= 'z') && (*Str >= 'a'))
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

    iRet = SmallCount(Arr);

    printf("number of small letters: %i\n",iRet);
    
    return 0;
}