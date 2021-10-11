//////////////////////////////////////////////////////////////////////
//
// Write a program which 2 strings from user and concat second string
// after first string. (Implement strcat() function).
// Input  : Marvellous Infosystem
//          Logic Building 
// Output : Marvellous Infosystem Logic Building 
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrCatX(char *Scr, char *Dest)
{
    while (*Dest != '\0')
    {
       Dest++;  
    }
    while (*Scr != '\0')
    {
       *Dest = *Scr;
        Scr++;
        Dest++;
    }
    
    *Dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Infosystem";  
    char brr[30] = "Logic Buliding";                    



    StrCatX(arr,brr);

    printf("%s\n",brr);

    return 0;
}