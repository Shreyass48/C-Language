///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and range of
// positions from user. Toggle all bits from that range.
// Input  : 97   9 13
// Output :Toggle all bits from position 9 to 13 of input number ie 879.
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iS, int iE)            
{                
    UINT iMask1 = 0xffffffff, iMask2 = 0xffffffff, iMask = 0, iAns = 0;

    iMask1 = iMask1 << (iS - 1);
    iMask2 = iMask2 >> (32 - iE);

    iMask = iMask1 & iMask2;
    iAns = iNo ^ iMask;

    return iAns;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iStart = 0, iEnd = 0;

    printf("Enter  number :");
    scanf("%d",&iValue);

    printf("Enter Start :");
    scanf("%d",&iStart);

    printf("Enter End :");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(iValue,iStart,iEnd);

    printf("Updates value :%u\n",iRet);
    
    return 0;
}