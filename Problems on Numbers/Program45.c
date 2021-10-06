/////////////////////////////////////////////////////////////////////////////
//
// Take no and power from user and display result.(Updators)
// Input  : 2  3
// Output : 8
// Date   : 15/09/21
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Power(int, int);

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue1);
    printf("Enter power:");
    scanf("%d", &iValue2);

    iRet = Power(iValue1, iValue2);
    printf("Power is:%d", iRet);
    return 0;
}

int Power(int iNo1, int iNo2)       //O(n)  
{
    int iCnt = 0;
    int iPower = 1;
    if(iNo1 < 0)             //Updator
    {
        iNo1 = -iNo1;
    }
     if(iNo2 < 0)             //Updator
    {
        iNo2 = -iNo2;
    }
    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iPower = iPower * iNo1;
    }

    return iPower;
}
