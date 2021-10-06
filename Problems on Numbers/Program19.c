//////////////////////////////////////////////////
//
// Program to find factorial(using updator)
// ip = 3
// op = 6 (3 * 2 * 1)
//
// ip = -5
// op = 120
//
///////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int);  


int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);			//stores return value in iRet.
	
	printf("Factorial is: %d\n",iRet);
	
	return 0;					//return to OS.
}
int Factorial(int iNo)  
{
	int iFact = 1;
	int iCnt = 0;	//counter
	
	if(iNo < 0)    //updator
	{
		iNo = -iNo;   //- - = +
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iFact = iFact * iCnt;		//Assignment Statement.
	}
	
	return iFact; 				//return mul to main
	
}