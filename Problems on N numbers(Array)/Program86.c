/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and Display Smallest number.
// Input  : 11 13 21 4   
// Output : 2      
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int MaxNum(int Arr[],int iSize) 
{
    int i = 0, iCnt = 0;
    int iMax = Arr[0]; //it handle negative cases

    for(i = 1; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }

    }
    return iMax;
}

int main()
{
    int *Ptr = NULL;  
    int iCnt = 0, iLength = 0;
    int iRet = 0;

    printf("ENter number of elements:\n");
    scanf("%d",&iLength);
    
    Ptr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter %d Elements:\n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Ptr[iCnt]);
    }

    iRet = MaxNum(Ptr, iLength);

    printf("\nMinimum number is:%d",iRet); 
    printf("\n");
   

    free(Ptr);
    return 0;
}