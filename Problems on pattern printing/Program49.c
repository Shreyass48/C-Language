/////////////////////////////////////////////////////////////////////////////
//
// Accept no from user and Display following pattern.
// Input  : 5
// iCnt   : 1 2 3 4 5 6
// Output : 2 4 6 8 10
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
        printf("%d\t ",iCnt * 2);   //Main Logic. (icnt*2)
        
    }

}