/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and display all such elements which are
// divisible by 5.
// Input  : N : 6
//          Elements : 85 66 3 80 93 88 
// Output : 80 85    
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Result:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int *p = NULL;
    int iCnt = 0, iLenght = 0;

    printf("Enter number of elements:");
    scanf("%d",&iLenght);

    p = (int *)malloc(sizeof(int) * iLenght);

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iLenght);

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,iLenght);

    free(p);
    return 0;



}