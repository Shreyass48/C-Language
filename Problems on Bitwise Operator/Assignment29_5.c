///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and toggle contents
// of first and last nibble of the number. Return modified number. (Nibble is a
// group of four bits).
// Input  : 10    
// Output : 3
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)            
{                                  
    UINT iMask = 0xf000000f, iAns = 0;       
    
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