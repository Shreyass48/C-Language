/////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and cheak whether last 4 bit is on or off.
// Input  :  15
// Output :  ON
// Date   : 12/10/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;    //Always used unsigned int in BITWISE Questions.(to use all 32 bits)

bool CheckBit(UINT iNo)
{                               //0000 0000 0000 0000 0000 0000 0000 1111
    UINT iMask = 0x0000000f;   //  0    0    0     0    0    0    0    F  (Mask finding)
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
        printf("First 4 Bits are ON!");
    }
    else
    {
        printf("First 4 Bits are OFF!");
    }
    

    return 0;
}