/////////////////////////////////////////////////////////////////////////////
//
// Accept 2 char from user and swap it.
// Input  :  a b
// Output :  b a
// Date   : 11/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void swap(char *p, char *q)
{
    char temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    char ch1 = '\0';
    char ch2 = '\0';
    

    printf("Enter Character:\n");
    scanf("%c",&ch1);
    printf("Enter Character:\n");
    scanf(" %c",&ch2);

    printf("before swapping %c %c\n",ch1,ch2);

    swap(&ch1, &ch2);   //call by address.

    printf("before swapping %c %c\n",ch1,ch2);

    return 0;
}
