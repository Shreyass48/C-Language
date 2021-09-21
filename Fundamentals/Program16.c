///////////////////////////////////
//
// Take number as input and print reverse to 1
// ip=4
// op= 4  3  2  1
//
///////////////////////////////////

#include<stdio.h>

void Display(int iNo)  
{
	int i = 0;
	
	if(iNo == 0)   //filter
	{
		printf("You entered Zero!");
		return;
	}
	
	if(iNo < 0) 		//updater
	{
		iNo = -iNo;
	}
	
	for(i = iNo; i >= 1; i--)
	{
		printf("%d\n",i);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}