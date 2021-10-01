/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and cheak given number's last occurance.(loop strts from 0)
// Input  : 11 13 21 13 3   13
// Output : 3
// Date   : 28/09/21
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CheckLastOcc(int Arr[], int iSize, int iNo)
{
    int i = 0, index = -1;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {  
           index = i;            
        }
    }
    return index;
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

    iRet = CheckLastOcc(Ptr, iLength, iValue);

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