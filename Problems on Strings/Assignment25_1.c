//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strcpy()
// function)
// Input  : Marvellous os    
// Output : Marvellous os   
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrCpyX(char *Scr, char *Dest)
{
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
    char arr[30] = "Marvellous os";  //Scr string
    char brr[30];                    //Dest string

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}