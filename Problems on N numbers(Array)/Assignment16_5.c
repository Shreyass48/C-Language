/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and display all such elements which are
// multiples of 11
// Input  : N : 6
//          Elements : 85 66 3 55 93 88 
// Output : 66 55 88
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
        if((Arr[iCnt] % 11) == 0)
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