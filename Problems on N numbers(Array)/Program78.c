/////////////////////////////////////////////////////////////////////////////
//
// Accept 5 no from user and Display Additon.(Static Array)
// Input  : 5 5 5 5 5 
// Output : 25            
// Date   : 22/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Addition(int Brr[], int iSize) //Array as IP and return int(Brr internal ptr)
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
    int *Arr = NULL;   //Array as ptr initiliza as Null(NULL is macro used to initilize)
    int iCnt = 0, iRet = 0, iLength = 0;

    printf("ENter number of elements:\n");
    scanf("%d",&iLength);
    
    Arr = (int *)malloc(sizeof(int) * iLength);  //Dynamic memory allocation using malloc
  
    printf("Enter Elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Addition(Arr,iLength); 
    printf("Addition is: %d",iRet);
    printf("\n");

    free(Arr);

    return 0;
}