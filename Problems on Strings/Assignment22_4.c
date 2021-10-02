/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and check whether
// it contains vowels in it or not.
// Input  : MarvellouS
// Output : It contain vowels
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *Str)
{
    while(*Str != '\0')
    {
        if(*Str == 'a' || *Str == 'e' || *Str == 'i' || *Str == 'o' || *Str == 'u')
        {
            return true;
        }
        else if(*Str == 'A' || *Str == 'E' || *Str == 'I' || *Str == 'O' || *Str == 'U')
        {
            return true;
        }
        Str++;
    }
    
    return false;
}
int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);
    
    if(bRet == true)
    {
        printf("Contain vowels\n");
    }
    else
    {
        printf("Not contain vowels\n");
    }
    return 0;
}