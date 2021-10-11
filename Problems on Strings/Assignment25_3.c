//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy capital
// characters of that string into another string.
// Input  : Marvellous Multi OS  
// Output : MMOS  
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrCpyCap(char *Scr, char *Dest)
{
    while (*Scr != '\0')
    {
        if((*Scr >= 'A') && (*Scr <= 'Z'))
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
    char arr[30] = "Marvellous Multi OS";  //Scr string
    char brr[30];                    //Dest string



    StrCpyCap(arr,brr);

    printf("%s\n",brr);

    return 0;
}