///////////////////////////////////////
//
// Program to print 5 time marvellous(functional approch)
//
///////////////////////////////////////

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
		printf("Marvellous\n");
	}	
}
	