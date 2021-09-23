/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return difference between summation
// of even elements and summation of odd elements.
// Input  : N : 6
//          Elements : 85 66 3 11 93 88 
// Output : 53     
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
        
    }
    return iSumEven - iSumOdd;
}
int main()
{
    int *p = NULL;
    int iCnt = 0, iLength = 0, iRet = 0;

    printf("Enter number of elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iLength);

    printf("Difference is:%d",iRet);

    free(p);
    return 0;

}