/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return the difference between largest
// and smallest number.
// Input  : N : 6
//          Elements : 85 66 3 66 93 88 
// Output : 90
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize) 
{
    int iCnt = 0;
    int imin = Arr[0];
    int imax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < imin)
        {
           imin = Arr[iCnt];
        }
         if(Arr[iCnt] > imax)
        {
           imax = Arr[iCnt];
        }
    }
    return imax - imin;

}

int main()
{
    int *p = NULL;
    int iCnt = 0, iLenght = 0;
    int iRet = 0;

    printf("Enter number of elements:");
    scanf("%d",&iLenght);

    p = (int *)malloc(sizeof(int) * iLenght);

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    } 

    printf("Enter %d elements\n",iLenght);

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        printf("Enter %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }   

    iRet  = Difference(p,iLenght);

    printf("Difference is:%d",iRet);
    printf("\n");

    free(p);
    return 0;
}