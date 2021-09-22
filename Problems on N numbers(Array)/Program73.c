/////////////////////////////////////////////////////////////////////////////
//
// Accept 5 no from user and Display Additon.(Static Array)
// Input  : 5 5 5 5 5 
// Output : 25            
// Date   : 22/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>



int main()
{
    int Arr[5];   //Static array(5 integer)
    int iSum = 0, iCnt = 0;
  
    printf("Enter Numbers:\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    printf("Addition is: %d",iSum);
    printf("\n");

    return 0;
}