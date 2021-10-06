//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and accept one
// character. Return frequency of that character.
// Input  :Marvellous Multi OS     char = M
// Output : 2
//
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>


int CountChar(char *Str, char cVal)
{
    int i = 0, count = 0;
    while (Str[i] != '\0')
    {
        if(Str[i] == cVal)
        {
           count++;
        }
        i++;
    }
    return count;
    
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

    iRet = CountChar(Arr,ch);

    
    printf("%d\n",iRet);
   
    
    return 0;
}