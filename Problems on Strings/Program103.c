/////////////////////////////////////////////////////////////////////////////
//
// Display your name using string (using ptr)
// Date   : 28/09/21
//
////////////////////////////////////////////////////////////////////////////

//Iteration

#include<stdio.h>

void Display(char *Brr)
{
    while(*Brr != '\0')
    {
        printf("%c\n",*Brr);
        Brr++;
    }
}
int main()
{
    char Arr[50];

    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);            //Display string till enter (break line).

    
    Display(Arr);

    return 0;
}