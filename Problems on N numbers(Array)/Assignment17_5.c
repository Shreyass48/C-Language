/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and accept one another number as NO ,
// return frequency of NO form it.
// Input  : N : 7 11
//          Elements : 85 66 3 11 93 88 11
// Output : 2     
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize, int iNo)
{
    int iCnt = 0, iFreq = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
        
    }
    return iFreq;
}
int main()
{
    int *p = NULL;
    int iCnt = 0, iLength = 0, iRet = 0, iValue = 0;

    printf("Enter number of elements:");
    scanf("%d",&iLength);
    printf("Enter number:");
    scanf("%d",&iValue);

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

    iRet = Frequency(p,iLength,iValue);

    printf("Frequency of 11 is:%d",iRet);

    free(p);
    return 0;

}