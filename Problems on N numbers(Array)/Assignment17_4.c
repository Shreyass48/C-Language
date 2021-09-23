/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return frequency of 11 form it.
// Input  : N : 7
//          Elements : 85 66 3 11 93 88 11
// Output : 2     
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt = 0, iFreq = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
        }
        
    }
    return iFreq;
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

    printf("Enter %d elements",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iLength);

    printf("Frequency of 11 is:%d",iRet);

    free(p);
    return 0;

}