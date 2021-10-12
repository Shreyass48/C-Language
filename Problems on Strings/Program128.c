/////////////////////////////////////////////////////////////////////////////
//
// Accept string and from user and reverse it inplace.(strrevX)
// Input  :  shreyas
// Output :  sayerhs
// Date   : 11/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void strrevX(char *start)
{
    char *end = NULL;
    end = start;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
    

}

int main()
{
    char Arr[30];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Reverse string is:%s\n",Arr);

    return 0;
}
