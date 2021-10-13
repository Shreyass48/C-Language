///////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and off 7th bit of that
// number if it is on. Return modified number.
// Input  : 79
// Output : 15
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(int iNo)
{
    UINT iMask = 0xffffffbf; 
    UINT iAns = 0;           

    iAns = iNo & iMask;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("%d\n",iRet);
   
    
    return 0;
}