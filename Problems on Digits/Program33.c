/////////////////////////////////////////////////////////////////////////////
//
// Take no from user and print no of digit in it(problems on digit)
// ip : 21
// op : 2
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountDigit(int);

int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigit(iValue);
    
	printf("Digits are:%d",iRet);
    return 0;
}

int CountDigit(int iNo)
{
	
	int iCnt = 0;
	
	if(iNo == 0)		//filter
	{
		return 1;
	}
	
	if(iNo < 0)			//updator
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)				//while(iNo != 0)
	{		
		iCnt++;	
		iNo = iNo / 10;			
	}
	
    return	iCnt;	
}