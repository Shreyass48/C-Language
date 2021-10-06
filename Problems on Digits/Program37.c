/////////////////////////////////////////////////////////////////////////////
//
// Take no from user and print reverse number on screen(Handle negative numbers)
// Input  : -21
// Output : -12
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
	
	//no need to include updator we use !=
	while(iNo != 0)				//time comp:O(N)
	{		
	iDigit = iNo % 10;
	printf("%d\n",iDigit);
	iRev = (iRev * 10) + iDigit;
	iNo = iNo / 10;			
	}
	
    return	iRev;	
}