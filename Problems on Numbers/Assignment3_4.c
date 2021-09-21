/////////////////////////////////////////////////////////////////////////
//
// Accept one character from user and convert case of that character.
//
// Input : a
// Output: A
//
// Input : E
// Output : e
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')		// Use of ASCII values to convert.
	{
		CValue = CValue - 32;
		printf("%c\n",CValue);
	}
	else if(CValue >= 'A' && CValue <= 'Z')
	{
		CValue = CValue + 32;
		printf("%c\n",CValue);
	}
	
		
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Character:");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}
	