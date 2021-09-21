/////////////////////////////////////////////////////////////////////////////
//
// Accept no from user and display following pattern.
// Input  : 5
// Output : * * * * *
// Date   : 20/09/21
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int);

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
        
    }
    printf("\n");
}