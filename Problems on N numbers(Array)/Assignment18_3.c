/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and accept one another number as NO ,
// return index of Last occurrence of that NO.
// Input  : N : 6 66
//          Elements : 85 66 3 66 93 88 
// Output : 3   
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iAns = -1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iAns = iCnt;
        }
        
    }
    return iAns;
    
}

int main()
{
    int *p = NULL;
    int iCnt = 0, iValue = 0, iLength = 0, iRet = 0;
  

    printf("Enter number of elements:");
    scanf("%d",&iLength);

    printf("Enter number:");
    scanf("%d",&iValue);

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

    iRet = LastOcc(p,iLength,iValue);

    printf("at %d location",iRet);

    free(p);
    return 0;

}