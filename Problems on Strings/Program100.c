/////////////////////////////////////////////////////////////////////////////
//
// Enter name and display on screen
// Date   : 28/09/21
//
////////////////////////////////////////////////////////////////////////////

//Functional Approch

#include<stdio.h>

void Display(char Brr[])
{
    printf("Your entered name is : %s\n",Brr);
}
int main()
{
    char Arr[50];

    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);            //Display string till enter (break line).

    
    Display(Arr);

    return 0;
}