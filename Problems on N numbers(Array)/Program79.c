/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and Display avg.
// Input  : 5   5 5 5 5 5 
// Output : 5.0           
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int i = 0, iSum = 0;
    float favg = 0.0f;
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    favg = ((float)iSum / (float)iSize);  //explicit typecasting
    return favg;
}

int main()
{
    int *Ptr = NULL;   //Array as ptr initiliza as Null(NULL is macro used to initilize)
    int iCnt = 0, iLength = 0;
    float fRet = 0.0f;

    printf("ENter number of elements:\n");
    scanf("%d",&iLength);
    
    Ptr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter %d Elements:\n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Ptr[iCnt]);
    }

    fRet = Average(Ptr, iLength);

    printf("\nAverage is:%f",fRet);
    printf("\n");
   

    free(Ptr);
    return 0;
}