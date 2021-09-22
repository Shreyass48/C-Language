/////////////////////////////////////////////////////////////////////////////
//
// Accept 5 no from user and Display Additon.(Static Array)
// Input  : 5 5 5 5 5 
// Output : 25            
// Date   : 22/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

//int Addition(int *Brr)
int Addition(int Brr[]) //Array as IP and return int(Brr internal ptr)
{
    int iCnt = 0, iSum = 0;
     for(iCnt = 0; iCnt < 5; iCnt++)
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

    iRet = Addition(Arr); //internal ptr it hold memory address of first element(base address)

    printf("Addition is: %d",iRet);
    printf("\n");

    return 0;
}