///////////////////////////////////////
//
// Program to print 1-5 number(functional approch)
// Declaration and Defination
//
///////////////////////////////////////
//we have to declare function before main like(header.h)
#include<stdio.h>

void Display();	//Declaration (trailer)

//int return type
int main()
{
	
	Display();	//Function call
	return 0;    //Return to os
}

void Display()	//Defination(movie)
{
	int i = 0;
	for(i = 1; i <=5; i++)
	{
		printf("%d\n",i);
	}	
}
	