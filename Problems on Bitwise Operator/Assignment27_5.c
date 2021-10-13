///////////////////////////////////////////////////////////////////////////////
//
// Write a program which checks whether first and last bit is On or
// OFF. First bit means bit number 1 and last bit means bit number 32..
// Input  : 2147483649
// Output : On
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheackBit(int iNo)
{
    UINT iMask = 0x80000001; 
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
        printf("Given bits are ON!\n");
    }
    else
    {
         printf("Given bits are OFF!\n");
    }
    
    return 0;
}