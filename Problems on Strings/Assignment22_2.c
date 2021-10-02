/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and count number of
// small characters.
// Input  : SHreyas
// Output : 5
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *Str)
{
    int cnt = 0;
    while (*Str != '\0')
    {
       if(*Str >= 'a' && *Str <= 'z')
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

    iRet = CountSmall(Arr);
    printf("small characters in strings are: %d\n",iRet);

    return 0;
}