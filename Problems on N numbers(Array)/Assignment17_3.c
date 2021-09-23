/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user check whether that numbers contains 11 in
// it or not.
// Input  : N : 7
//          Elements : 85 66 3 80 93 88 90
// Output : 11 is not present     
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize) 
{
    int iCnt = 0;
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

}

int main()
{
    int *p = NULL;
    int iCnt = 0, iLenght = 0;
    bool bRet = false;

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

    bRet  = Check(p,iLenght);

    if(bRet == true)
    {
        printf("11  is present");
    }
    else
    {
        printf("11 is Not present");
    }
    printf("\n");

    return 0;
}