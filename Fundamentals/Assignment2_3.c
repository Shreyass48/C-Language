//////////////////////////////////////////////////////////////////////////////////////
//
//Accept num from user, if num less than 10 then print 'Hello' otherwise print 'Demo'
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}