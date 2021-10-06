//////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and accept one
// character. Check whether that character is present in string or not.
// Input  :Marvellous Multi OS     char = e
// Output : true
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *Str, char cVal)
{
    int i = 0;
    while (Str[i] != '\0')
    {
        if(Str[i] == cVal)
        {
            return true;
        }
        i++;
    }
    return false;
    
}

int main()
{
    char Arr[20];
    char ch = '\0';
    bool  bRet = false;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character:\n");
    scanf(" %c",&ch);

    bRet = CheckChar(Arr,ch);

    if(bRet == true)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }
    
    return 0;
}