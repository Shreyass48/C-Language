/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and display only
// digits from that string.
// Input  : Marvell123ouS
// Output : 123
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayDigit(char *Str)
{
    int i = 0 ;
    while(Str[i] != '\0')
    {
        if(Str[i] >= '0' && Str[i] <= '9')
        {
            printf("%c",Str[i]);
        }
        i++;    
    }
    
}

int main()
{
    char ch[20];

    printf("Enter string:");
    scanf("%[^'\n']s",ch);

    DisplayDigit(ch);

    return 0;
}
