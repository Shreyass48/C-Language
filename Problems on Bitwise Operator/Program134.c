/////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and cheak whether 7th and 12th bit of number is on or off.
// Input  :  2124
// Output :  ON
// Date   : 12/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;    //Always used unsigned int in BITWISE Questions.(to use all 32 bits)

bool CheckBit(UINT iNo)
{                               //0000 0000 0000 0000 0000 1000 0100 0000
    UINT iMask = 0x00000840;   //  0    0    0     0    0    8    4    0   (Mask finding)
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
        printf("7th and 12th Bit is ON!");
    }
    else
    {
        printf("7th and 12th Bit is OFF!");
    }
    

    return 0;
}