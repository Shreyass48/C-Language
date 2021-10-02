/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and count number of
// capital characters.
// Input  : SHreyas
// Output : 2
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *Str)
{
    int cnt = 0;
    while (*Str != '\0')
    {
       if(*Str >= 'A' && *Str <= 'Z')
       {
           cnt++;
       }
       Str++;
        
    }
    return cnt;
    
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("Capital characters in strings are: %d\n",iRet);

    return 0;
}