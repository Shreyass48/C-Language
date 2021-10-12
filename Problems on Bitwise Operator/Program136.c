////////////////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and accept bit position cheak whether taht bit is on or off.
// Input  :  
// Output :  
// Date   : 12/10/21
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;    

bool CheckBit(UINT iNo, UINT iPos)
{                               
    UINT iMask = 0x00000001;   
    UINT iResult = 0;

    if((iPos > 32)  || (iPos < 1))          //Filter
    {
        return false;
    }

    iMask = iMask << (iPos - 1);

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
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    bool bRet = false;
    
    printf("Enter number:");
    scanf("%d",&iValue1);
    printf("Enter Position of Bit:");
    scanf("%d",&iValue2);

    bRet = CheckBit(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Given bit is ON!");
    }
    else
    {
        printf("Given bit is OFF!");
    }
    

    return 0;
}