///////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and toggle 7th and
// 10th bit of that number. Return modified number.
// Input  : 137
// Output : 713
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(int iNo)
{
    UINT iMask = 0x00000240; 
    UINT iAns = 0;           

    iAns = iNo ^ iMask;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("%d\n",iRet);
   
    
    return 0;
}