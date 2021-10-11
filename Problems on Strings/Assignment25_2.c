//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and copy the
// contents of that string into another string. (Implement strncpy()
// function)
// Input  : Marvellous os  10   
// Output : Marvellous  
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>

void StrNCpyX(char *Scr, char *Dest, int iCnt)
{
    while ((*Scr != '\0') && (iCnt != 0))
    {
        *Dest = *Scr;
        Scr++;
        Dest++;
        iCnt--;
    }
    *Dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous OS";  //Scr string
    char brr[30];                    //Dest string



    StrNCpyX(arr,brr,10);

    printf("%s\n",brr);

    return 0;
}