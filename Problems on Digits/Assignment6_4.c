//////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and return the count of digits in
// between 3 and 7.
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultDigit(int iNo)
{
    int iMul = 1, iDigit = 0;

    if(iNo == 0)         //Filter
    {
        return 0;
    }
    while(iNo != 0)  
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d\n",iRet);
    return 0;
}


// Time Complexity = O(N)