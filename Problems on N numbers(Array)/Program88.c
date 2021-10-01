/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and Display difference between smaller and laregr number.
// Input  : 1 3 4 5 6
// Output : 5  ( 6 -1)      
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize) 
{
    int i = 0, iCnt = 0;
    int iMin = Arr[0], iMax = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
        if(Arr[i] > iMin)
        {
            iMax = Arr[i];
        }

    }
    return iMax - iMin;;
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

    iRet = Difference(Ptr, iLength);

    printf("\nDifference is:%d",iRet); 
    printf("\n");
   

    free(Ptr);
    return 0;
}