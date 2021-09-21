///////////////////////////////////////
//
// Program to print 5 time hash(functional approch)
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
		printf("#\n");
	}	
}
	