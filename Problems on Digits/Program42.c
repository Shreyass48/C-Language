/////////////////////////////////////////////////////////////////////////////
//
// Take no from user and print table of that no
// Input : 5
// Output :  5 10 15 20 25 30 35 40 45 50
// Date :  15/09/21
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void DisplayTable(int);

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    DisplayTable(iValue);
    return 0;
}

void DisplayTable(int iNo)
{
   int iCnt = 0;
    
    if(iNo == 0)             //Filter
    {
       return;
    }
    if(iNo < 0)             //Updator
    {
        iNo = -iNo;
    }

   for(iCnt = 1; iCnt <= 10; iCnt++)
   {
       printf("%d\n",iNo * iCnt);
   }
    
}

    
