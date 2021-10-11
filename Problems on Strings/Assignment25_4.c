//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy small
// characters of that string into another string.
// Input  : Marvellous multi OS  
// Output : arvellous multi  
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrCpySmall(char *Scr, char *Dest)
{
    while (*Scr != '\0')
    {
        if((*Scr >= 'a') && (*Scr <= 'z'))
        {
        *Dest = *Scr;
         Dest++;
        }
        Scr++;
    }
    *Dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous multi OS";  //Scr string
    char brr[30];                    //Dest string



    StrCpySmall(arr,brr);

    printf("%s\n",brr);

    return 0;
}