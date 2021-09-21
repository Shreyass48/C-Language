/////////////////////////////////////////////////////////////////////////////
//
// Accept no from user and Display following pattern.
// Input  : 4 
// Output : 1 * 2 * 3 * 4 *
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
        printf("%d\t*\t",iCnt);
        
    }
    printf("\n");
}