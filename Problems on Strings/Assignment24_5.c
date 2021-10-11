//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user reverse that string in place.
// Input  : abcd
// Output : dbca
//
//
//////////////////////////////////////////////////////////////////////
#include <stdio.h>
void StrRevX(char *Str)
{
    char *ch;
    char temp;
    ch = Str;
    while (*ch != '\0')
    {
        ch++;
    }
    ch--;
    while (Str <= ch)
    {
        temp = *Str;
        *Str = *ch;
        *ch = temp;

        ch--;
        Str++;
    }
}

int main()
{
    char Arr[50];

    printf("ENter string:");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);
    printf("Reverse is: %s\n", Arr);
    return 0;
}
