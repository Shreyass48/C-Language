/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and accept one another number as NO ,
// check whether NO is present or not.
// Input  : N : 7 11
//          Elements : 85 66 3 11 93 88 11
// Output : True(Element present)     
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bAns = false;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            bAns = true;
            break;
        }
    }
    return bAns;

}

int main()
{
    int *p = NULL;
    int iCnt = 0, iValue = 0, iLength = 0;
    bool bRet = false;

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

    bRet = Check(p,iLength,iValue);

    if(bRet == true)
    {
        printf("Element is present");
    }
    else
    {
        printf("Element is not present");
    }
    printf("\n");

    free(p);
    return 0;

}