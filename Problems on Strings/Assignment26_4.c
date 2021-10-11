//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy that
// characters of that string into another string by converting all capital
// characters into small case.
// Input  : Marvellous 2 
// Output : marvellous 2
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrCpySmall(char *Scr, char *Dest)
{
    int i = 0;
    while (*Scr != '\0')
   {
       if((*Scr >= 'A') && (*Scr <= 'Z'))
       {
           *Scr = *Scr + 32;
       }
       *Dest = *Scr;
       Scr++;
       Dest++;

   }
    *Dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous 2";  
    char brr[30];                



    StrCpySmall(arr,brr);

    printf("%s\n",brr);

    return 0;
}