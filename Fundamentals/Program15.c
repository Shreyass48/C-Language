/////////////////////////////////
//
//Program to display 5-1
//
////////////////////////////////

#include<stdio.h>

void Display(); //Prototype

int main()
{
	Display();
	return 0;
}

void Display()
{
	int i = 0;
	for(i = 5; i >= 1; i--)
	{
		printf("%d\n",i);
	}
}