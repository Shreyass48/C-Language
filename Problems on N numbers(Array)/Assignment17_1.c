/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return frequency of even numbers.
// Input  : N : 6
//          Elements : 85 66 3 80 93 88
// Output : 3      
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize) 
{
    int iCnt = 0, iEvn = 0;
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvn++;
        }
        
    }
    return iEvn;

}

int main()
{
    int *p = NULL;   
    int iCnt = 0, iRet = 0, iLength = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iLength);
    
    p = (int *)malloc(sizeof(int) * iLength);  //Dynamic memory allocation using malloc

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }    
  
    printf("Enter %d Elements:\n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iLength); 
    printf("Result: %d",iRet);
    printf("\n");

    free(p);

    return 0;
}