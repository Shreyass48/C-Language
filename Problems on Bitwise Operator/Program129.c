/////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and convert it into binary.
// Input  :  14
// Output :  0 1 1 1
// Date   : 12/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayBinary(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d\t",iDigit);
        iNo = iNo / 2;
        
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayBinary(iValue);
    printf("\n");
    return 0;
}