/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and Display count of even numbes in it.
// Input  : 4       2 4 3 1
// Output : 2         
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize) //arr is ptr
{
    int i = 0, iEven = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iEven++;
        }
    }
    return iEven;
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

    iRet = CountEven(Ptr, iLength);

    printf("\nCount of even numbers:%d",iRet); 
    printf("\n");
   

    free(Ptr);
    return 0;
}