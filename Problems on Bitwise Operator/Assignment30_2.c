///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept two numbers from user and display position
// of common ON bits from that two numbers.
// Input  : 10   15  (1010  1111)   
// Output : 2    4
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)            
{                
    UINT iAns = 0, iMask = 0x00000001;
    int i = 0;

    UINT iNo = iNo1 & iNo2;

    printf("Common bits are : \n");
    for(i = 1; i < 32; i++)
    {
        iAns = iNo & iMask;
        if(iAns != 0)
        {
            printf("%d\n",i);
        }
        iMask = iMask << 1;
    }

}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter First number:");
    scanf("%d",&iValue1);
    printf("Enter Second number:");
    scanf("%d",&iValue2);
    
    CommonBits(iValue1, iValue2);
    
    return 0;
}