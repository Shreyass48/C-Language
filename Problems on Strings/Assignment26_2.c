//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy that
// characters of that string into another string by removing all white
// spaces.
// Input  : Marve llou s 
// Output : Marvellous 
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrCpyX(char *Scr, char *Dest)
{
    int i = 0;
    while (*Scr != '\0')
   {
       if(*Scr == ' ')
       {
           Scr++;
       }
      *Dest = *Scr;
      Scr++;
      Dest++;

   }
    *Dest = '\0';
}
int main()
{
    char arr[30] = "Marve llou s";  
    char brr[30];                



    StrCpyX(arr,brr);

    printf("%s\n",brr);

    return 0;
}