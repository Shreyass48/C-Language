//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and accept one
// character. Return index of first occurrence of that character.
// Input  :Marvellous Multi OS     char = M
// Output : 1
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>


int FirstChar(char *Str, char cVal)
{
    int i = 0;
    while (Str[i] != '\0')
    {
        if(Str[i] == cVal)
        {
           break;
        }
        i++;
    }
    return i;
    
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character:\n");
    scanf(" %c",&ch);

    iRet = FirstChar(Arr,ch);

    printf("%d\n",iRet);
   
    
    return 0;
}