//////////////////////////////////////////////////////////////////////////////////////
//
//Accept 2 numbers from user and print first number in second number of times
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iCnt)
{
	int i = 0;
	
	for(i = 0; i < iCnt; i++)
	{
		printf("%d",iNo);
	}
}

int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("Enter first number:");
	scanf("%d",&iValue);
	
	printf("Enter first number:");
	scanf("%d",&iCount);
	
	Display(iValue, iCount);
	
	return 0;
}
	