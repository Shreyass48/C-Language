/////////////////////////////////////////////////////////////////////////////
//
// Accept N no from user and cheak 11 is there or not.
// Input  : 11 13 21 -4 3
// Output : present     
// Date   : 27/09/21
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int *Ptr = NULL;  
    int iCnt = 0, iLength = 0;
    bool bRet = false;

    printf("ENter number of elements:\n");
    scanf("%d",&iLength);
    
    Ptr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter %d Elements:\n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Ptr[iCnt]);
    }

    bRet = CheckNumber(Ptr, iLength);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }
    printf("\n");
   

    free(Ptr);
    return 0;
}