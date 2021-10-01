/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return product of all odd elements.
// Input  : N : 6
//          Elements : 15 66 3 70 10 88
// Output : 45  
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iSize)
{
    int iCnt = 0, iProduct = 1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
           iProduct = iProduct * Arr[iCnt];
        }
        
    }
    return iProduct;
}

int main()
{
    int *p = NULL;
    int iCnt = 0, iValue = 0, iLength = 0, iRet = 0;
  

    printf("Enter number of elements:");
    scanf("%d",&iLength);

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

    iRet = Product(p,iLength);

    printf("Result:%d",iRet);
    printf("\n");

    free(p);
    return 0;

}