//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy that
// characters of that string into another string in reverse order.
// Input  : Marvellous Python
// Output : nohtyP suollevraM
//
//
//////////////////////////////////////////////////////////////////////
#include <stdio.h>
void StrRevX(char *str)
{

    char *ch;
    ch = str;
    while (*ch != '\0')
    {
        ch++;
    }
    ch--;
    char temp;

    while (str <= ch)
    {
        temp = *str;
        *str = *ch;
        *ch = temp;

        ch--;
        str++;
    }
}
void StrCpyRev(char *Src, char *dest)
{
    StrRevX(Src);
    while (*Src != '\0')
    {
        *dest = *Src;
        Src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Infosystem";
    char brr[30]; // Empty string


    StrCpyRev(arr, brr);
    printf("Reverse string:%s\n", brr);
    return 0;
}