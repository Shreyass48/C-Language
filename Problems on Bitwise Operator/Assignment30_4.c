///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.
// Input  : 10     3  7 
// Output :true
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ToggleBitRange(UINT iNo, int iPos1, int iPos2)            
{                
    UINT iMask1 = 0x00000001, iMask2 = 0x00000001, iAns1 = 0, iAns2 = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iAns1 = iNo & iMask1;
    iAns2 = iNo & iMask2;

    if((iAns1 == iMask1) || (iAns2 == iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }
    
   
}

int main()
{
    UINT iValue = 0;
    int iP1 = 0, iP2 = 0;
    bool bRet = false;

    printf("Enter  number :");
    scanf("%d",&iValue);

    printf("Enter first position :");
    scanf("%d",&iP1);

    printf("Enter second position :");
    scanf("%d",&iP2);

    bRet = ToggleBitRange(iValue,iP1,iP2);

    if(bRet == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    
    return 0;
}