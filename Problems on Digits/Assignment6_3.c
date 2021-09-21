//////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and return the count of digits in
// between 3 and 7.
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0, iDigit = 0;

    if(iNo < 0)         //Updator
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 7 && iDigit > 3)
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

    iRet = CountRange(iValue);

    printf("%d\n",iRet);
    return 0;
}


// Time Complexity = O(N)