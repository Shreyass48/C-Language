///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.
// Input  : 257
// Output : true
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)            
{                
    UINT iMask1 = 0x00000100, iMask = 0, iAns1 = 0, iAns2 = 0;
    UINT iMask2 = 0x00000800;

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
    bool bRet = false;

    printf("Enter  number:");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("9th or 12th bit is on\n");
    }
    else{
        printf("9th and 12th bit is off\n");
    }
    
    return 0;
}