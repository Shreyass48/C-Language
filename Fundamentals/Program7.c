///////////////////////////////////////
//
// Program to print 1-5 number(functional approch)
//
///////////////////////////////////////

#include<stdio.h>

void Display()
{
	int i = 0;
	for(i = 1; i <=5; i++)
	{
		printf("%d\n",i);
	}	
}
	

//int return type
int main()
{
	
	Display();
	return 0;    //return to os
}