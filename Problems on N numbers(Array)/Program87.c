/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and Display Smallest number.
// Input  : 11 13 21 -4 3
// Output : -4      
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int MinNum(int Arr[],int iSize) 
{
    int i = 0, iCnt = 0;
    int iMin = Arr[0]; //it handle negative cases

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }

    }
    return iMin;
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

    iRet = MinNum(Ptr, iLength);

    printf("\nMinimum number is:%d",iRet); 
    printf("\n");
   

    free(Ptr);
    return 0;
}