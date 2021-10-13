///////////////////////////////////////////////////////////////////////////////
//
// Write a program which checks whether 5th and 18th bits are On or OFF.
// Input  : 131088
// Output : On
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheackBit(int iNo)
{
    UINT iMask = 0x00020010;  
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
        printf("5th and 18th bits are ON!\n");
    }
    else
    {
         printf("5th and 18th bits are OFF!\n");
    }
    
    return 0;
}