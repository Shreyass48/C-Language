//////////////////////////////////////////////////////////////////////////////
//
// Take no from user and print Addition of digit of it(problems on digit)
// 
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Addition(int);

int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Addition(iValue);
    
	printf("Addition of digit is:%d",iRet);
    return 0;
}

int Addition(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	
	while(iNo > 0)				//while(iNo != 0)
	{
	iDigit = iNo % 10;			
	iSum = iSum + iDigit;	
	iNo = iNo / 10;			
	}
	
    return	iSum;	
}