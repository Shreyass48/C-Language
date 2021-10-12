/////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and display hex.
// Input  :  42
// Output :  2b
// Date   : 12/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>



int main()
{
    int iValue = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    printf("its decimal format is: %d\n",iValue);
    printf("its hex format is: %x\n",iValue);
    return 0;
}