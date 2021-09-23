/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return difference between frequency of
// even number and odd numbers.
// Input  : N : 7
//          Elements : 85 66 3 80 93 88 90
// Output : 1      
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize) 
{
    int iCnt = 0, iEvn = 0, iOdd = 0;
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvn++;
        }
        else
        {
            iOdd++;
        }
        
    }
    return iEvn - iOdd;

}

int main()
{
    int *p = NULL;
    int iCnt = 0, iLenght = 0, iRet = 0;

    printf("Enter number of elements:");
    scanf("%d",&iLenght);

    p = (int *)malloc(sizeof(int) * iLenght);

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    } 

    printf("Enter %d elements",iLenght);

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        printf("Enter %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }   

    iRet  = Frequency(p,iLenght);

    printf("Result:%d",iRet);
    printf("\n");

    return 0;
}