//////////////////////////////////////////////////////////////////////////////////
//
// Program to find factorial(using updator) for huge number using long int
// ip = 3
// op = 6 (3 * 2 * 1)
//
// ip = -5
// op = 120
//
///////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

unsigned long int Factorial(int);  


int main()
{
	int iValue = 0;
	unsigned long int iRet = 0 ;     //int become 64 bit
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);			//stores return value in iRet.
	
	printf("Factorial is: %ld\n",iRet);   //%ld long int(decimal)
	
	return 0;					//return to OS.
}
unsigned long int Factorial(int iNo)  
{
	unsigned long int iFact = 1 ;
	int iCnt = 0;	//counter
	
	if(iNo < 0)    //updator
	{
		iNo = -iNo;   //- - = +
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iFact = iFact * iCnt;		//Assignment Statement.
	}
	
	return iFact; 				//return sum to main
	
}