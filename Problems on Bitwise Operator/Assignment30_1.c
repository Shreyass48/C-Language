///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.
// Input  : 11    
// Output : 3
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef unsigned int UINT;

int CountOne(int iNo)            
{                
   int iMask = 0x00000001, iAns = 0;
   int iCnt = 0, i = 0;

   for(i = 1; i < 32; i++)
   {
       iAns = iNo & iMask;
       if(iAns == iMask)
       {
           iCnt++;
       }
       iMask = iMask << 1;

   }
   return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);
    

    iRet = CountOne(iValue);

    printf("Count of 1's : %d\n",iRet);
    return 0;
}