/////////////////////////////////////////////////////////////////////////////
//
// Accept char from user and change the case.
// Input  : A  b
// Output : a  B
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


char CharToggle(char c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
        return c + 32;
    }
    else if ((c >= 'a') && (c <= 'z'))
    {
        return c - 32;
    }
}

int main()
{

    char ch = '\0';
    char cRet = '\0';

    printf("Enter character:\n");
    scanf("%c", &ch);

    cRet = CharToggle(ch);

    printf("Toggle letter is: %c\n",cRet);
    
    return 0;
}