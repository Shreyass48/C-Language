/////////////////////////////////////////////////////////////////////////////
//
// Accept small char from user convert it into capital.
// Input  : a
// Output : A
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


char SmallToCapital(char c)
{
    if ((c >= 'a') && (c <= 'z'))
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

    cRet = SmallToCapital(ch);

    printf("Capital letter is: %c\n",cRet);
    
    return 0;
}