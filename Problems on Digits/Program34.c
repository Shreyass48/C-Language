/////////////////////////////////////////////////////////////////////////////
//
// Take no from user and print no of even digit in it.
// Input : 2121
// Output : 2
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int CountEven(int);

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number\n");
	scanf("%d", &iValue);

	iRet = CountEven(iValue);

	printf("Even Digits are:%d", iRet);
	return 0;
}

int CountEven(int iNo)
{

	int iCnt = 0;
	int iDigit = 0;

	if (iNo == 0) //filter
	{
		return 1;
	}

	if (iNo < 0) //updator
	{
		iNo = -iNo;
	}

	while (iNo > 0) //while(iNo != 0)  time comp:O(N)
	{
		iDigit = iNo % 10;

		if (iDigit % 2 == 0)
		{
			iCnt++;
		}

		iNo = iNo / 10;
	}

	return iCnt;
}