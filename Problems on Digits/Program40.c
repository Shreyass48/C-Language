/////////////////////////////////////////////////////////////////////////////
//
// Cheak whether given no is perfect(Addition of sum factors) or not.(3 Functions)
// Input : 6 (2 + 4)
// Output : Number is Perfect.
// Date :  15/09/21
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int);
int SumFactor(int);

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("Number is Perfect.");
    }
    else
    {
        printf("Number is not perfect.");
    }
    return 0;
}

bool CheckPerfect(int iNumber)
{
    int iRet = 0;
    iRet = SumFactor(iNumber);
    if(iNumber < 0)         //Updator for iNumber
    {
        iNumber = -iNumber;
    }
    if(iRet == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int SumFactor(int iNo)
{
    int iSum = 0, iCnt = 0;

    if(iNo < 0)         //Updator for iNo
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
        return iSum;
}