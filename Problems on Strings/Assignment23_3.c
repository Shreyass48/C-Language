/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and toggle the case.
// Input  : MarvellouS
// Output : mARVELLOUs
//
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void strtogglex(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] = Str[i] - 32;
        }
        else if (Str[i] >= 'A' && Str[i] <= 'Z')
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

    strtogglex(ch);

    return 0;
}
