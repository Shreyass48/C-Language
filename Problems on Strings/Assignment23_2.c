/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and convert it into
// upper case.
// Input  : MarvellouS
// Output : MARVELLOUS
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void struprx(char *Str)
{
    int i =0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] = Str[i] - 32;
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

    struprx(ch);

    return 0;
}
