/////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and cheak whether 4th bit of number is on or off.
// Input  :  43
// Output :  ON
// Date   : 12/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;    //Always used unsigned int in BITWISE Questions.(to use all bits)

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00000008;
    UINT iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)
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

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("4th Bit is ON!");
    }
    else
    {
        printf("4th Bit is OFF!");
    }
    

    return 0;
}