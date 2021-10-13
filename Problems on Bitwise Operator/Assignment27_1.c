///////////////////////////////////////////////////////////////////////////////
//
// Write a program which checks whether 15th bit is On or OFF.
// Input  : 16384
// Output : On
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheackBit(UINT iNo)
{
    UINT iMask = 0x00004000;
    UINT iAns = 0;

    iAns = iNo & iMask;

    if(iMask == iAns)
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
    bool bRet = false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = CheackBit(iValue);

    if(bRet == true)
    {
        printf("15th bit is ON!\n");
    }
    else
    {
        printf("15th bit is OFF!\n");
    }
    return 0;
}