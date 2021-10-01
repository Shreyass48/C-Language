/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user Display count of greater than 10 
// and less than 20 number.
// Input  : 11 13 21 4   
// Output : 2      
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountRange(int Arr[],int iSize) //arr is ptr
{
    int i = 0, iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] > 10) && (Arr[i] < 20))
        {
           iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int *Ptr = NULL;   //Array as ptr initiliza as Null(NULL is macro used to initilize)
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

    iRet = CountRange(Ptr, iLength);

    printf("\nCount is:%d",iRet); 
    printf("\n");
   

    free(Ptr);
    return 0;
}