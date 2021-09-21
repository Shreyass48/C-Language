//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Write a program which accept number from user and print even factors of that number.
//
// Input : 24
// Output: 1 2 4 6 8 12
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
	int iCnt = 0;
		
		if(iNo < 0)		// Updator
		{
			iNo = -iNo;
		}
		printf("1\n");
		for(iCnt = 1; iCnt < iNo; iCnt++)
		{
			if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
			{
				printf("%d\n",iCnt);
			}
			
	    }
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter number:");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}
	