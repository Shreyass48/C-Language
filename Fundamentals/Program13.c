/////////////////////////////////////////////////////////
//
// Take ip from user and print number
// IP = 3
// OP= 1 2 3
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int);	//Declaration (trailer)

//int return type
int main()
{
	int iNo = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iNo);
	
	Display(iNo);	//Function call
	return 0;    //Return to os
}

void Display(int iValue)	//Defination(movie)
{
	int i = 0;
	for(i = 1; i <= iValue; i++)
	{
		printf("%d\n",i);
	}	
}
	