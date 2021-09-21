//////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and return difference between
// summation of even digits and summation of odd digits.
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountEven(int iNo)
{
    int iEvenSum = 0, iDigit = 0;
    int iOddSum = 0;
    if(iNo < 0)            //Updator
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iEvenSum - iOddSum;
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