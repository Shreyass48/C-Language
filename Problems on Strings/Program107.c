/////////////////////////////////////////////////////////////////////////////
//
// Display ASCII values
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
	int i=0;
	printf("Ascii table is\n");
	printf("***********\n");
	printf("Decimal\tASCII\t");
	printf("___________\n");
	
	for(i=0;i<127;i++)
	{
		printf("%c\t%d\n",i,i);
	}
}

int main()
{
	
	Display();
	return 0;
}