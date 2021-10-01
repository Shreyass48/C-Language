/////////////////////////////////////////////////////////////////////////////
//
// Enter name and display on screen
// Date   : 28/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);            //Display string till enter (break line).

    printf("Your entered name is : %s\n",Arr);


    return 0;
}