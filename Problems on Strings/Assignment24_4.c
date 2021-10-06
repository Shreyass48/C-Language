//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and accept one
// character. Return index of last occurrence of that character.
// Input  :Marvellous Multi OS     char = M
// Output : 11
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>


int LastChar(char *Str, char cVal)
{
    int i = 0, temp = 0;
    while (Str[i] != '\0')
    {
        if(Str[i] == cVal)
        {
           temp = i;
        }
        i++;
    }
    return temp;
    
}

int main()
{
    char Arr[20];
    char ch;
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character:\n");
    scanf(" %c",&ch);

    iRet = LastChar(Arr,ch);

    printf("%d\n",iRet);
   
    
    return 0;
}