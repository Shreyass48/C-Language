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
    

    iSum = iSum + Arr[0];
    iSum = iSum + Arr[1];
    iSum = iSum + Arr[2];
    iSum = iSum + Arr[3];
    iSum = iSum + Arr[4];

    printf("Addition is: %d",iSum);
    printf("\n");

    return 0;
}