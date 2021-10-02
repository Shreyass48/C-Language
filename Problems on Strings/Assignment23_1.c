/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and convert it into
// lower case.
// Input  : MarvellouS
// Output : marvellous
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void strlwrx(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Str[i] = Str[i] + 32;
        }
        i++;
    }
    printf("%s",Str);
}

int main()
{
    char ch[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",ch);

    strlwrx(ch);

    return 0;
}
