/////////////////////////////////////////////////////////////////////////////
//
// Accept 5 no from user and Display Additon.(Static Array) using ptr syntax
// Input  : 5 5 5 5 5 
// Output : 25            
// Date   : 22/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Addition(int *Brr, int iSize) 
{
    int iCnt = 0, iSum = 0;
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Brr[iCnt];
    }
    return iSum;

}

int main()
{
    int Arr[5];   
    int iCnt = 0, iRet = 0;
    
  
    printf("Enter Numbers:\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Addition(Arr,5); 
    printf("Addition is: %d",iRet);
    printf("\n");

    return 0;
}