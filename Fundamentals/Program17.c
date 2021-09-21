//////////////////////////////////////////////////////////
//
// Take number as input and print additon till that no
// ip=5
// op=15
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int);  


int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Addition(iValue);			//stores return value in iRet.
	
	printf("Addition is: %d\n",iRet);
	
	return 0;					//return to OS.
}
int Addition(int iNo)  
{
	int iSum = 0;
	int iCnt = 0;	//counter
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iSum = iSum + iCnt;		//Assignment Statement.
	}
	
	return iSum; 				//return sum to main
	
}