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

bool CheckBit(int iNo)
{
    int iMask = 0x00000008;
    int iResult = 0;
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
    int iValue = 0;
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