/////////////////////////////////////////////////////////////////////////
//
// Write a program which accept string from user and display it in
// reverse order.
// Input  : Marvellous
// Output : suollevraM
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void Reverse(char *str)
{
    int iCnt = 0;
    char temp;

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }

    str = str - iCnt;
    int n = iCnt - 1;
    
    for (int i = n; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s", arr);
    
    Reverse(arr);
    return 0;
}