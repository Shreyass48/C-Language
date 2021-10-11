//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy that
// characters of that string into another string by toggling the case.
// Input  : Marvellous 2 
// Output : mARVELLOUS 2
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrCpyToggle(char *Scr, char *Dest)
{
    int i = 0;
    while (*Scr != '\0')
   {
       if((*Scr >= 'A') && (*Scr <= 'Z'))
       {
           *Scr = *Scr + 32;
       }
       else if((*Scr >= 'a') && (*Scr <= 'z'))
       {
           *Scr = *Scr - 32;
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



    StrCpyToggle(arr,brr);

    printf("%s\n",brr);

    return 0;
}