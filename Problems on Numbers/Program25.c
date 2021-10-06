///////////////////////////////////////////////////////////////
//
// Program to find factors of given number.(n/2 complexity)
//
/////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayFactors(int);

int main()
{
    int iNo = 0;
    
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
	DisplayFactors(iNo);
    
    return 0;
}

void DisplayFactors(int iValue)
{
	int iCnt = 0;	//loop counter
	
	if(iValue < 0)   //updator
	{
		iValue = -iValue;
	}
	
	for(iCnt = 1; iCnt <= (iValue/2); iCnt++)  //O(N/2)
	{
		if((iValue % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}

}
/*
DRY RUN
Suppose input is 8. 
((8 % 1) == 0)  True print 1
((8 % 2) == 0)  True print 2
((8 % 3) == 0)  False
((8 % 4) == 0)  True print 4
*/