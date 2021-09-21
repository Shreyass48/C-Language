//////////////////////////////////////////////////////////////////////////////////////
//
//Accept number from user and cheak whether number is EVEN or ODD.
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FASLE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if(iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FASLE;
	}
}		

int main()
{
	int iValue = 0;
	BOOL bRet = FASLE;
	
	printf("Enter number:");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == TRUE)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is odd");
	}
	return 0;
}
	