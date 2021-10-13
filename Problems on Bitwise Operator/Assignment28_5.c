///////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and on its first 4
// bits. Return modified number.
// Input  : 73
// Output : 79
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OnBit(int iNo)
{
    UINT iMask = 0x0000000f; 
    UINT iAns = 0;           

    iAns = iNo | iMask;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("%d\n",iRet);
   
    
    return 0;
}