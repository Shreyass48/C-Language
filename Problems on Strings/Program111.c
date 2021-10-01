/////////////////////////////////////////////////////////////////////////////
//
// Accept char from use cheak it is capital or not
// Input  : A
// Output : capital
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

// bad practise (ascii values)

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char c)
{
    if((c>=65) && (c<=90))
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
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("Capital\n");
    }
    else
    {
        printf("not capital\n");
    }

	return 0;
}