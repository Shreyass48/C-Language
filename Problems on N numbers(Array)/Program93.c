/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and cheak given number's first occurance.
// Input  : 11 13 21 -4 3   13
// Output : 1
// Date   : 28/09/21
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CheckFirstOcc(int Arr[], int iSize, int iNo)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            break;              
        }
    }
    if(i == iSize)   
    {
        return -1;   // Suppose element not found
    }
    else
    {
        return i;
    }
}

int main()
{
    int *Ptr = NULL;  
    int iCnt = 0, iLength = 0, iValue = 0, iRet = 0;
    

    printf("Enter number of elements:\n");
    scanf("%d",&iLength);
    
    Ptr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter %d Elements:\n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Ptr[iCnt]);
    }

    printf("ENter elements to search:\t");
    scanf("%d",&iValue);
    iRet = CheckFirstOcc(Ptr, iLength, iValue);


   if(iRet == -1)
   {
       printf("Number is not there.");
   }
   else
   {
       printf("Number found at %d index",iRet);
   }
   printf("\n");

    free(Ptr);
    return 0;
}