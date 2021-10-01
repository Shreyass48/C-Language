/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and Display additon of odd numbers.
// Input  : 5   1 2 3 4 5
// Output : 9          
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[],int iSize) //arr is ptr
{
    int i = 0, iOddSum = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iOddSum = iOddSum + Arr[i];
        }
    }
    return iOddSum;
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

    iRet = SumOdd(Ptr, iLength);

    printf("\nAddition of Odd numbers is:%d",iRet); 
    printf("\n");
   

    free(Ptr);
    return 0;
}