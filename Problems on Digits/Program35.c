////////////////////////////////////////////////////////////////////////////////////
//
// Take no from user and print even digit addition on screen.
// Input : 213
// Output : 6
//
////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int SumEven(int);

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number\n");
	scanf("%d", &iValue);

	iRet = SumEven(iValue);

	printf("Summation of Even digits is:%d", iRet);
	return 0;
}

int SumEven(int iNo)
{
	int iSum = 0;
	int iDigit = 0;

	if (iNo < 0) //updator
	{
		iNo = -iNo;
	}

	while (iNo > 0) //while(iNo != 0)  time comp:O(N)
	{
		iDigit = iNo % 10;

		if (iDigit % 2 == 0)
		{
			iSum = iSum + iDigit;
		}

		iNo = iNo / 10;
	}

	return iSum;
}