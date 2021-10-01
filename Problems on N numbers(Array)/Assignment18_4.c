/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and accept Range, Display all elements from
// that range
// Input  : N : 6  Start = 10 End = 30
//          Elements : 11 9 5 22 26 2
// Output : 11 22 26   
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iSize, int iSt, int iEd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iSt && Arr[iCnt] <= iEd)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
    
}

int main()
{
    int *p = NULL;
    int iCnt = 0, iStart = 0, iLength = 0, iEnd = 0;
  

    printf("Enter number of elements:");
    scanf("%d",&iLength);

    printf("Enter Starting point:");
    scanf("%d",&iStart);

    printf("Enter Ending point:");
    scanf("%d",&iEnd);


    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to allocate memory!");
        return -1;
    }

    printf("Enter %d elements:\n",iLength);

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Range(p,iLength,iStart,iEnd);

    free(p);
    return 0;

}