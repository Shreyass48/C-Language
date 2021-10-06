/////////////////////////////////////////////////////////////////////////////
//
// Take no from user and print reverse number on screen.
// Input : 21
// Output : 12
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Reverse(int);

int main()
{
    int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
    
	printf("Reverse of given number is:%d",iRet);
    return 0;
}

int Reverse(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	
	if(iNo < 0)			//updator
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)				//time comp:O(N)
	{		
	iDigit = iNo % 10;
	iRev = (iRev * 10) + iDigit;
	iNo = iNo / 10;			
	}
	
    return	iRev;	
}