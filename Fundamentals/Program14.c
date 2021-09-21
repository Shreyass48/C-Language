/////////////////////////////////////////////////////////
//
// Take ip from user and print number
// IP = -3
// OP= 1 2 3
//use ip updater (for negative number)
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int);	

//int return type
int main()
{
	int iNo = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iNo);
	
	Display(iNo);	//Function call
	return 0;    //Return to os
}

void Display(int iValue)	
{
	int i = 0;
	
	if(iValue == 0)       //filter : it not take ip 
	{
		printf("You entered Zero!\n");
		return;
	}
	
	if(iValue < 0)         //Input updator : it take ip and update it
	{
		iValue = -iValue;
	}
	
	for(i = 1; i <= iValue; i++)
	{
		printf("%d\n",i);
	}	
}
	