/////////////////////////////////////////////////////////////////////////////
//
// Accepet string from user and calculate the string length use own strlen.
// Input  : Shreyas
// Output : 7
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

//Iteration

#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);            

    
    iRet = strlenX(Arr);

    printf("Length of string is : %d\n",iRet);

    return 0;
}