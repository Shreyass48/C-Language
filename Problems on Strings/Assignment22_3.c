/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and return
// difference between frequency of small characters and frequency of
// capital characters.
// Input  : MarvellouS
// Output : 6 (8 - 2)
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDifference(char *Str)
{
    int scnt = 0, Ccnt = 0;
    while (*Str != '\0')
    {
       if(*Str >= 'a' && *Str <= 'z')
       {
           scnt++;
       }
       else if(*Str >= 'A' && *Str <= 'Z')
       {
           Ccnt++;
       }
       
       Str++;
        
    }
    return scnt - Ccnt;
    
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet = CountDifference(Arr);
    printf("Difference is: %d\n",iRet);

    return 0;
}