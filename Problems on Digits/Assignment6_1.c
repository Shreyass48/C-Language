//////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and return the count of even digits.
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo == 0)            //Filter
    {
        return 1;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d\n",iRet);
    return 0;
}


// Time Complexity = O(N)