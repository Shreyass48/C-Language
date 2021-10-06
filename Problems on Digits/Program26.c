//////////////////////////////////////////////////
//
// Program to reverse number(problems on digit)
// Sequence Tech
//
/////////////////////////////////////////////////
#include<stdio.h>

void Display();

int main()
{
    
	Display();
    
    return 0;
}
void Display()
{
	//local variables
	int iNo = 7521;
    int iDigit = 0;
	
	iDigit = iNo % 10;			//value is 1 in iDigit
	printf("%d\n",iDigit);		//print 1
	iNo = iNo / 10;				//value is 752 in iNo
	
	iDigit = iNo % 10;			//value is 2 in iDigit
	printf("%d\n",iDigit);		//print 2
	iNo = iNo / 10;				//value is 75 in iNo
	
	iDigit = iNo % 10;			//value is 5 in iDigit
	printf("%d\n",iDigit);		//print 5
	iNo = iNo / 10;				//value is 7 in iNo
	
	iDigit = iNo % 10;			//value is 7 in iDigit
	printf("%d\n",iDigit);		//print 7
	iNo = iNo / 10;				//value is 0 in iNo
	
	
		
}