/////////////////////////////////////////////////////////////////////////////
//
// Accept char from user cheak it is small or not
// Input  : a
// Output : small
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool CheckSmall(char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    char ch = '\0';
    bool bRet = false;

    printf("Enter character:\n");
    scanf("%c", &ch);

    bRet = CheckSmall(ch);

    if (bRet == true)
    {
        printf("Small\n");
    }
    else
    {
        printf("not Small\n");
    }

    return 0;
}